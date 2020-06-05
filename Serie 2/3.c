/*
*@file 3.c
*@brief Escriba un programa que solicite al usuario una frase. Posteriormente, despliegue una lista de
*las letras que aparecen en dicha frase. Por último, indique cuántas veces apareció cada una
*de estas letras en la frase
*@author Eduardo Pérez García y César Arellano
*@date 03/06/2020
*/
#include <stdio.h>

int main(void)
{
  char *abecedario = "abcdefghijklmnñopqrstuvwxyzABCDEFGHIJKLMNÑOPQRSTUVWXYZ";
  char frase[200];
  int contadorLetras;

  printf("Escriba la frase: ");
  scanf(" %[^\n]",frase);

  for(int i = 0; i < 54; i++) // Recorrer abecedario (General)
  {
    contadorLetras = 0;
    for(int j = 0; frase[j] != '\0'; j++) // Recorrer frase (Particular)
    {
      if(frase[j] == abecedario[i])
        contadorLetras++;
    }
    if(contadorLetras > 0) // letra del abecedario actual
      printf("La letra [%c], se repitió [%d] veces\n", abecedario[i], contadorLetras);
  }
  return 0;
}
