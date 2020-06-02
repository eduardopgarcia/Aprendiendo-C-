/*
*@file 12.c
*@brief Este programa recibe 10 números ingresados por el usuario y los suma.
*@author Eduardo Pérez García y César Arellano
*@date 01/06/2020
*/
#include <stdio.h>

int main(void)
{
  int num,sum=0,i=0;
  while(i<10)
  {
    printf("Ingresa el número [%d]: ",i+1);
    scanf(" %d",&num);

    sum+=num;
    i++;
  }
  printf("\nEl resultado de la suma es: %d\n\n",sum);
  return 0;
}
