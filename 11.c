/*
*@file 11.c
*@brief Este programa lee una serie de números positivos (terminando con -99) e indica cual fue el número mayor.
*@author Eduardo Pérez García y César Arellano
*@date 01/06/2020
*/

#include <stdio.h>

int main(void)
{
  int num,numMayor = 0;

  do
  {
    printf("Ingrese un número positivo (-99 para terminar): ");
    scanf(" %d",&num);

    if(num <= 0 && num != -99)
      printf("Error, sólo números positivos mayores a 0\n");
    if(num > 0)
    {
      if(num > numMayor)
        numMayor = num;
    }

  }while(num != -99);
  printf("\nEl número mayor es: %d\n\n",numMayor);
  return 0;
}
