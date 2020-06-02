/*
*@file 6.c
*@brief Este programa permite convertir de lb a kg y g.
*@author Eduardo Pérez García y César Arellano
*@date 01/06/2020
*/

#include <stdio.h>
#define LB 0.453592

int main(void)
{
  float pesoLB,pesoKG,pesoG;
  printf("Ingrese el peso (en libras): ");
  scanf(" %f", &pesoLB);

  pesoKG=pesoLB*LB;
  pesoG=pesoKG*1000;

  printf("El peso en kilogramos es: %.2f\n",pesoKG);
  printf("El peso en gramos es: %.2f\n\n",pesoG);

  return 0;
}
