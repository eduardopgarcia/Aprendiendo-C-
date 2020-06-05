/*
*@file 4.c
*@brief Programa que recibe una frase por el usuario y posteriormente imprime cada palabra en una línea.
*@author Eduardo Pérez García y César Arellano
*@date 03/06/2020
*/

#include <stdio.h>

int main(void)
{
  char frase[200];

  printf("Ingresa una frase: ");
  scanf(" %[^\n]",frase);
  printf("\n");
  for(int i = 0; frase[i] !='\0'; i++)
  {
    if(frase[i] != ' ')
      printf("%c",frase[i]);
    else
      printf("\n");
  }
  printf("\n\n");
  return 0;
}
