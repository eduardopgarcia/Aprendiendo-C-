/*
*@file 1.c
*@brief Este programa indica el número mayor entre 4 números ingresados por el usuario.
*@author Eduardo Pérez García y César Arellano
*@date 29/05/2020
*/
#include <stdio.h>

int main(void)
{
  int n1,n2,n3,n4;

  printf("Ingresa el numero [1]: ");
  scanf("%d",&n1);
  printf("Ingresa el numero [2]: ");
  scanf("%d",&n2);
  printf("Ingresa el numero [3]: ");
  scanf("%d",&n3);
  printf("Ingresa el numero [4]: ");
  scanf("%d",&n4);

  if((n1>n2)&&(n1>n3)&&(n1>n4)){
    printf("\nEl numero mayor es: %d",n1);
  }
  else if((n2>n1)&&(n2>n3)&&(n2>n4)){
    printf("\nEl numero mayor es: %d",n2);
  }
  else if((n3>n1)&&(n3>n2)&&(n3>n4)){
    printf("\nEl mayor es: %d",n3);
  }
  else{
    printf("\nEl numero mayor es: %d",n4);
  }
  printf("\n\n");
  return 0;
}
