/*
*@file 1.c
*@brief Programa que permita calcular el cuadrado de los 100 primeros números enteros
**positivos, y que a continuación escriba una tabla con dichos cuadrados. El programa debe
**hacerse en dos fases: en la primera, se calcula el cuadrado de los 100 primeros número
**enteros positivos. En la segunda, se imprime la tabla que incluya tanto el número como su cuadrado.
*@author Eduardo Pérez García y César Arellano
*@date 02/06/2020
*/

#include <stdio.h>

int main(void)
{
  int cuadrados[100];
  for(int i = 1; i<=100; i++) // Fase 1: Cálculo de cuadrados
  {
    cuadrados[i-1] = i*i;
  }
  printf(" Número    |    Cuadrado\n");
  for(int i = 1; i<= 100; i++) // Impresion de resultados;
  {
    printf("  %3d      |     %3d\n", i, cuadrados[i-1]);
  }

  return 0;
}
