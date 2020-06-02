/*
*@file 10.c
*@brief Este programa realiza de forma independiente la suma de números pares e impares del 1 al 200.
*@author Eduardo Pérez García y César Arellano
*@date 01/06/2020
*/
 #include <stdio.h>

 int main(void)
 {
   int i,sumaPar=0,sumaImpar=0;
   for(i=1;i<=200;i++){
     if(i%2==0){
       sumaPar+=i;
     }
     else
      sumaImpar+=i;
   }
   printf("La suma par es de: %d\n",sumaPar);
   printf("La suma impar es de: %d\n\n",sumaImpar);
   return 0;
 }
