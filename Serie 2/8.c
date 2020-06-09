/*
*@file 8.c
*@brief Programa que convierte una frase ingresada por el usuario a una frase en maýusculas y en minúsculas.
*@author Eduardo Pérez García
*@date 06/06/2020
*/

#include <stdio.h>

int main(void)
{
  int i,j;
  char frase[200],fraseMay[200],fraseMin[200];
  printf("Ingrese una frase: ");
  scanf(" %[^\n]",frase);
  for(i=0;frase[i]!='\0';i++) //Ciclo para convertir la frase a mayúsculas
  {
    if((frase[i]>='a')&&(frase[i]<='z')) //Si una letra es minúscula, la remplaza por la misma letra en mayúscula
    {
      fraseMay[j]=frase[i]-'a'+'A';
      j++;
    }
    if((frase[i]>='A')&&(frase[i]<='Z')) //Si una letra es mayúscula, copia la letra tal cual en la frase en mayúsculas
    {
      fraseMay[j]=frase[i];
      j++;
    }
    if(frase[i+1]==' ') //Si en la frase hay un espacio, agrega el mismo espacio de la frase original en la frase en mayúsculas
    {
      fraseMay[j]=' ';
      j++;
    }
  }
  fraseMay[j]='\0';
  j=0; //Reseteamos la variable para usarla en el siguiente ciclo.

  for(i=0;frase[i]!='\0';i++) //Ciclo para convertir la frase a minúsculas
  {
    if((frase[i]>='A')&&(frase[i]<='Z')) //Si una letra es mayúscula, la remplaza por la misma letra en minúscula
    {
      fraseMin[j]=frase[i]-'A'+'a';
      j++;
    }
    if((frase[i]>='a')&&(frase[i]<='z')) //Si una letra es minúscula, copia la letra tal cual en la frase en minúscula
    {
      fraseMin[j]=frase[i];
      j++;
    }
    if(frase[i+1]==' ') //Si en la frase hay un espacio, agrega el mismo espacio de la frase original en la frase en minúscula
    {
      fraseMin[j]=' ';
      j++;
    }
  }
  fraseMin[j]='\0';
  printf("\n%s\n%s\n\n",fraseMay,fraseMin);
  return 0;
}
