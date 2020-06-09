/*
*@file 9.c
*@brief Programa que convierte la primera y última letra de las palabras de una frase ingresada por el usuario a mayúsculas
*@author Eduardo Pérez García y César Arellano
*@date 08/06/2020
*/

#include <stdio.h>

int main(void)
{
  int i;
  char frase[200], fraseNueva[200];
  printf("Ingrese una frase: ");
  scanf(" %[^\n]",frase);
  for(i = 0; frase[i] != '\0'; i++)
  {
    if((frase[i] >= 'a' && frase[i] <= 'z') && (frase[i+1] == ' ' || frase[i-1] == ' ' || i == 0 || frase[i+1]=='\0'))
    {
      fraseNueva[i]=frase[i]-'a'+'A';
    }
    else
    {
      fraseNueva[i] = frase[i];
    }
  }
  fraseNueva[i] = '\0';
  printf("\n%s\n\n",fraseNueva);
  return 0;
}
