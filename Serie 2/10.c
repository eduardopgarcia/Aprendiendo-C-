/*
*@file 10.c
*@brief Programa calcula los días transcurridos entre dos fechas ingresadas por el usuario.
*@author Eduardo Pérez García y César Arellano
*@date 08/06/2020
*/

#include <stdio.h> 

int validacionFechas(int dia, int mes, int anio, int fechas[]); //no es necesario volver a especificar el tamaño del arreglo "fechas"
int calculoDias(int d1, int m1,int a1,int d2,int m2,int a2);

int main(void)
{
  int fechas[12] = {31,28,31,30,31,30,31,31,30,31,30,31}; //dias de los 12 meses de un año NO bisiesto
  int dia1,mes1,anio1,dia2,mes2,anio2,dias,alerta;
  do
  {
    alerta = 0; //Se resetea la variable si es el caso
    printf("Escribe la primer fecha con el siguiente formato: DD/MM/AAAA\n");
  	scanf(" %d/%d/%d", &dia1,&mes1,&anio1);
    printf("Escribe la segunda fecha con el siguiente formato: DD/MM/AAAA\n");
  	scanf(" %d/%d/%d", &dia2,&mes2,&anio2);
    if(validacionFechas(dia1,mes1,anio1,fechas) && validacionFechas(dia2,mes2,anio2,fechas))
    {
      if(anio1 > anio2)
        alerta = 1;
      if(anio1 == anio2)
      {
        if(mes1 > mes2)
        {
          alerta = 1;
        }

        if(mes1 == mes2)
        {
          if(dia1 > dia2)
          {
            alerta=1;
          }
        }
      }
    }
    else // Validación de fechas retorna 0
    {
      alerta = 1;
    }
  }while(alerta == 1);
  dias = calculoDias(dia1,mes1,anio1,dia2,mes2,anio2);
  printf("\nLa diferencia de días es: %d\n\n",dias);
  return 0;
}

int validacionFechas(int dia, int mes, int anio, int fechas[])
{
  if(anio%4==0 && (anio%100!=0 || anio%400==0)) // Si es año bisiesto
  {
    fechas[1] = 29;
    if((mes >= 1  && mes<= 12) && (dia >= 1 && dia <= fechas[mes-1]))
    {
      return 1; //fecha válida
    }
    else
      return 0; //fecha inválida
  }
  else // Si no es año bisiesto.
  {
    if((mes >= 1  && mes<= 12) && (dia >= 1 && dia <= fechas[mes-1]))
    {
      return 1; //fecha válida
    }
    else
      return 0; //fecha inválida
  }
}

int calculoDias(int d1, int m1,int a1,int d2,int m2,int a2)
{
  int tempDias1, tempDias2;
  tempDias1 = (a1*365)+(m1*30)+d1;
  tempDias2 = (a2*365)+(m2*30)+d2;
  return tempDias2-tempDias1;
}
