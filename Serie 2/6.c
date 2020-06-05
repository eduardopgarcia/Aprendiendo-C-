/*
*@file 5.c
*@brief Programa que invierte el orden de las palabras de una frase ingresada por el usuario.
*@author Eduardo Pérez García y César Arellano
*@date 02/06/2020
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
  int i,j,k=0;
  char frase[200],fraseInvertida[200];
  printf("Escribe una frase: ");
  scanf(" %[^\n]",frase);
  for(i = strlen(frase)-1; i >= 0; i--) // Recorremos la cadena original al revés.
  {
    if(frase[i] == ' ' || i == 0) // Si hay un espacio en la frase
    {
      for(j = i+1; frase[j]!='\0' && frase[j] != ' '; j++) // Recorremos los caracteres de la cadena hasta que haya caracter nulo o un espacio en la frase original.
      {
        if(i == 0) // Si estamos en la posición 0 de la frase original, como no es una espacio tomará una letra posterior a la original, espero por ello que obtendremos el caracter en la posición anterior.
          fraseInvertida[k] = frase[j-1];
        else //Si encontró un espacio, se guardará lo que hay después de dicho espacio antes del siguiente espacio o caracter nulo.
          fraseInvertida[k] = frase[j];
        k++;
      }
      if(i == 0) // Obtendremos la última letra de la primera palabra de la cadena, ya que último ciclo j estaba en una posición posterior.
      {
        fraseInvertida[k] = frase[j-1];
        fraseInvertida[k+1] = '\0'; // se añade el caracter de fin de línea.
      }
      else
      {
        fraseInvertida[k] = ' '; // Se agrega espacio
        k++; // Se aumenta para seguir recorriendo la cadena invertida.
      }
    }
  }
  puts(frase);
  puts(fraseInvertida);
  return 0;
}
