/*
*@file 1.c
*@brief Este programa indica el número mayor entre 4 números ingresados por el usuario.
*@author Eduardo Pérez García y César Arellano
*@date 29/05/2020
*/
#include <stdio.h>

int main(void)
{
  int num,i,cont = 0;

  printf("Ingresa un numero (no letras ni caracteres especiales): ");
  scanf(" %d",&num);

  for(i=1; i <= num; i++){
    if(num%i == 0)
      cont++;
  }
  if(num < 0)
    printf("Los numeros negativos no se consideran primos ni compuestos.\n\n");
  else if((num == 0) || (num == 1))
    printf("Este numero no se considera primo ni compuesto\n\n");
  else if(cont == 2)
    printf("El numero [%d] es primo.\n\n",num);
  else
    printf("El numero [%d] no es primo.\n\n",num);

  return 0;
}
