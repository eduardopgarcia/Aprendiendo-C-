
/*
*@file 1.c
*@brief Este programa lee e imprime una serie de números (distintos de cero) y la cantidad de números que se ingresaron (sin contar al 0).
*@author Eduardo Pérez García y César Arellano
*@date 29/05/2020
*/

#include <stdio.h>

void lecturaNum(int *numero, int *cant);

int main(void)
{
  int num,cantidad=0;
  do{
    lecturaNum(&num,&cantidad);
  }while(num!=0);
  printf("\n\nLa cantidad de numero ingresados fue[%d]\n\n",cantidad);
  return 0;
}

/*
*@brief Esta función lee los números ingresados por el usuario y cuenta cuántos números son ingresados
*@author Eduardo Pérez García y César Arellano
*@param int numero
*@param int cant
*@return void
*/
void lecturaNum(int *numero, int *cant)
{
  printf("Ingresa un numero (0 para terminar): ");
  scanf(" %d",numero);
  if(*numero!=0){
    printf("Numero: %d\n",*numero);
    (*cant)++;
  }
}
