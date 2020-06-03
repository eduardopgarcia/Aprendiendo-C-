/*
*@file 14.c
*@brief Programa que permite elevar un número x a una potencia n ingresados por el usuario.
*@author Eduardo Pérez García y César Arellano
*@date 02/06/2020
*/

#include <stdio.h>

int main(void)
{
  int x,n,res,i;
  printf("Ingresa la base 'x': ");
  scanf(" %d",&x);
  printf("Ingresa la potencia 'n': ");
  scanf(" %d",&n);
  res = x;
  for(i = 1; i < n; i++)
  {
    res = res*x;
  }
  printf("\nEl resultado es: %d\n\n",res);
  return 0;
}
