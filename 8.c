/*
*@file 8.c
*@brief Este programa recibe una letra por ingresada por el usuario e indica si es mayúscula o minúscula.
*@author Eduardo Pérez García y César Arellano
*@date 01/06/2020
*/

#include <stdio.h>

int main(void)
{
  char letra;
  printf("Ingresa una letra: ");
  scanf(" %c",&letra);
  if((letra>='a')&&(letra<='z')){
    printf("La letra [%c] es minuscula.\n\n",letra);
  }
  else if((letra>='A')&&(letra<='Z')){
    printf("La letra [%c] es mayuscula.\n\n",letra);
  }
  else printf("No es un caracter valido.\n\n");

  return 0;
}
