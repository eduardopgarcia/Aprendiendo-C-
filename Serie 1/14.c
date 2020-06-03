/*
*@file 14.c
*@brief Programa que pide una fecha con el formato DD/MM/AA e indica cúal es el día siguiente.
*@author Eduardo Pérez García y César Arellano
*@date 02/06/2020
*/

#include <stdio.h>

void calcularDiaSiguiente(int d, int m, int a, int *dSig, int *mSig, int *aSig);
int main(void)
{
  int dia, mes, anio, diaSiguiente, mesSiguiente, anioSiguiente;
  do{
    printf("Ingresa una fecha con el formato [DD/MM/AA]: ");
    scanf(" %d/%d/%d",&dia,&mes,&anio);
  }while(dia < 1 || dia > 31 || mes < 1 || mes > 12);
  calcularDiaSiguiente(dia, mes, anio, &diaSiguiente, &mesSiguiente, &anioSiguiente);
  printf("\nLa fecha del día siguiente es: %02d/%02d/%02d\n\n",diaSiguiente,mesSiguiente,anioSiguiente);
  return 0;
}

/*
*@brief Esta función recibe la fecha introducia por el usuario con el formato DD/MM/AA y devuelve el día siguiente.
*@author Eduardo Pérez García y César Arellano
*@param int d
*@param int m
*@param int a
*@param int *dSig
*@param int *mSig
*@param int *aSig
*@return void
*/
void calcularDiaSiguiente(int d, int m, int a, int *dSig, int *mSig, int *aSig)
{
  if(a%4 == 0 && (a%100 != 0 || a%400 == 0)) // Año bisiesto
  {
    if((m == 2 && d == 29) || (d == 30 && (m == 4 || m == 6 || m == 9 || m == 11)) || d == 31) // Setear al primer día del siguiente mes
    {
      *mSig = m+1;
      *dSig = 1;
    }
    else //Aumentar en 1 el dia en el mismo mes.
    {
      *mSig = m;
      *dSig = d+1;
    }
  }
  else // No es año bisiesto
  {
    if((m == 2 && d == 28) || (d == 30 && (m == 4 || m == 6 || m == 9 || m == 11)) || d == 31) // Setear al primer día del siguiente mes
    {
      *mSig = m+1; //
      *dSig = 1;
    }
    else //Aumentar en 1 el dia en el mismo mes.
    {
      *mSig = m;
      *dSig = d+1;
    }
  }
  if(*mSig == 13) // Si la fecha original fue d = 31 y m = 12
  {
    *mSig = 1;
    *aSig = a + 1;
  }
  else //se mantiene el mismo año
    *aSig = a;
}
