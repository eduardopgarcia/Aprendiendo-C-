/*
*@file 2.c
*@brief Este programa imprime y suma la serie numérica 3,6,9...99.
*@author Eduardo Pérez García y César Arellano
*@date 29/05/2020
*/

#include <stdio.h>

int main(void)
{
  int i;

  for(i=3;i<=99;i+=3){
    printf("%d\n",i);
  }
  printf("\n\n");
  return 0;
}
