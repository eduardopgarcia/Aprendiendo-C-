/*
*@file 7.c
*@brief Programa que quita la segunda frase de una frase de 3 palabras ingresada por el usuario.
*@author Eduardo Pérez García y César Arellano
*@date 04/06/2020
*/
#include <stdio.h>
#include <string.h>
int main(void)
{
  int i, j = 0, k;
  char frase[200],fraseNueva[200];
  printf("Escribe una frase de 3 palabras: ");
  scanf(" %[^\n]",frase);

  for(i = 0; frase[i] != ' '; i++) // obtener primera palabra.
  {
    fraseNueva[j] = frase[i];
    j++;
  }
  fraseNueva[j] = ' ';
  j++;
  for(i = strlen(frase)-1; frase[i] != ' '; i--) // obtener última palabra.
  {
    if(frase[i-1] == ' ')
    {
      for(k = i; frase[k]!='\0';k++)
      {
        fraseNueva[j] = frase[k];
        j++;
      }
    }
  }
  fraseNueva[j] = '\0';
  puts(fraseNueva);
  return 0;
}
