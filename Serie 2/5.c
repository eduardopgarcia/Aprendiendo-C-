/*
*@file 5.c
*@brief Escriba un programa que solicite al usuario una frase e indique si es un palíndromo.
*@author Eduardo Pérez García y César Arellano
*@date 02/06/2020
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
  char frase[200],frase2[200];
  int i,j;
  printf("Escribe una frase: ");
  scanf(" %[^\n]",frase);
  
  for(i=0; frase[i] != '\0'; i++) // Convertir frase a minúsculas y quitar espacios
	{
		if(frase[i]==' ') // Si hay un espacio
		{
			for(j=i+1;frase[j]!='\0';j++) // Quitar espacios
      {
        frase[j-1]=frase[j];
      }
			frase[j-1]='\0'; // Se pone en la posicion j-1, ya que hay una letra duplicada.
		}
    if(frase[i]>='A' && frase[i]<='Z') // Pone en minúsculas la frase completa.
      frase[i]=frase[i]-'A'+'a';
  }
  j = 0; //Reseteamos la variable para utilizarla después
  for(i = strlen(frase)-1; i>=0; i--) // Copiar la frase original a la otra cadena de manera invetida.
  {
    frase2[j] = frase[i];
    j++;
  }
  if(strcmp(frase,frase2) == 0) // Comprobamos si son iguales las cadenas.
  {
    printf("\nLa frase es un palíndromo\n\n");
  }
  else
  {
    printf("\nLa frase no es un palíndromo\n\n");
  }
  return 0;
}
