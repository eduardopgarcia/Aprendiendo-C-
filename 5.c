
/*
*@file 5.c
*@brief Este programa calcula la superfecie del aŕea de un tríangulo con los datos ingresados por el usuario.
*@author Eduardo Pérez García y César Arellano
*@date 01/06/2020
*/

#include <stdio.h>

int main(void)
{
  float b,h,res;

  printf("Ingrese el valor de la base: ");
  scanf(" %f",&b);
  printf("Ingrese el valor de la altura: ");
  scanf(" %f",&h);
  res=(b*h)/2;
  printf("\nArea resultante: %.2f\n\n",res);

  return 0;
}
