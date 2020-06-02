/*
*@file 9.c
*@brief Este programa recibe dos letras por parte del usuario e indica si están en orden alfabético.
*@author Eduardo Pérez García y César Arellano
*@date 01/06/2020
*/

#include <stdio.h>

int main(void)
{
  char primeraLetra,segundaLetra;
  printf("Ingresa la primera letra a comparar: ");
  scanf(" %c",&primeraLetra);
  printf("Ingresa la segunda letra a comparar: ");
  scanf(" %c",&segundaLetra);

  if(primeraLetra < segundaLetra){
    printf("Las letras [%c] y [%c] estan en orden alfabetico.\n\n",primeraLetra,segundaLetra);
  }
  else
    printf("Las letras [%c] y [%c] no estan en orden alfabetico.\n\n",primeraLetra,segundaLetra);
  return 0;
}
