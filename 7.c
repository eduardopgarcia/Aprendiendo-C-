/*
*@file 7.c
*@brief En este programa se aplica la reasignación de valores en variables.
*@author Eduardo Pérez García y César Arellano
*@date 01/06/2020
*/

#include <stdio.h>

int main(void)
{
  int a, b, c, tempA;
  printf("Ingrese el valor para [a]: ");
  scanf(" %d",&a);
  printf("Ingrese el valor para [b]: ");
  scanf(" %d",&b);
  printf("Ingrese el valor para [c]: ");
  scanf(" %d",&c);

  tempA=a;
  a=c;
  c=b;
  b=tempA;

  printf("\nEl nuevo valor de [a] es: %d\n",a);
  printf("El nuevo valor de [b] es: %d\n",b);
  printf("El nuevo valor de [c] es: %d\n\n",c);

  return 0;
}
