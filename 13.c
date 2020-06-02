/*
*@file 13.c
*@brief Dados 10 números enteros que serán introducidos por el teclado, escribir un algoritmo que
**permita visualizar la suma de los números pares de la lista, que indique cuantos números pares
**existen, la media aritmética de los números impares, y que indique cuántos números impares
**existen en la lista.
*@author Eduardo Pérez García y César Arellano
*@date 01/06/2020
*/

#include <stdio.h>

int main (void)
{
  int num,i=0,sumaPar=0,cantPar=0,sumaImpar=0,mediaImpar=0,cantImpar=0;
  while(i < 10)
  {
    printf("Ingresa el número [%d]: ",i+1);
    scanf(" %d",&num);
    if(num%2 == 0) // números pares
    {
      sumaPar+=num;
      cantPar++;
    }
    else  //números impares
    {
      sumaImpar += num;
      cantImpar++;
    }
    i++;
  }
  mediaImpar = sumaImpar / cantImpar;
  printf("\nLa suma de números pares es: %d\n",sumaPar);
  printf("La cantidad de números pares es: %d\n",cantPar);
  printf("La media de números impares es: %d\n",mediaImpar);
  printf("La cantidad de números impares es: %d\n\n",cantImpar);

  return 0;
}
