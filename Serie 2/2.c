/*
*@file 2.c
*@brief Programa que
*@author Eduardo Pérez García y César Arellano
*@date 02/06/2020
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int cantTemp,i,cantMedia=0;
  float *temperaturas, media = 0; //temperaturas es nuestro arreglo con memoria dinámica

  do {
    printf("Ingrese la cantidad de temperaturas: ");
    scanf(" %d",&cantTemp);
    if(cantTemp < 5 || cantTemp > 100){
      printf("Dato inválido, intente de nuevo.\n");
    }
  }while(cantTemp < 5 || cantTemp > 100);
  temperaturas = (float *) malloc(sizeof(float)*cantTemp); //creación de memoria dinámica para el arreglo 'temperaturas'
  printf("\n");
  for(i = 0; i < cantTemp; i++) // Lectura de las n temperaturas
  {
    printf("Temperatura[%d]: ",i+1);
    scanf(" %f",&temperaturas[i]);
    media += temperaturas[i];    // Suma temperaturas para posteriormente obtener la media
  }
  media /= cantTemp; //Calculo de la media

  for(i=0;i<cantTemp;i++ )
  {
    if(temperaturas[i]>=media)
    {
      cantMedia++;
    }
  }
  printf("\nLa cantidad de temperaturas ingresadas fue: %d\n",cantTemp);
  printf("Las temperaturas mayores o iguales a la media [%.2f] son: %d\n\n",media,cantMedia);
  free(temperaturas); //Libera espacio de memoria asignado dinámicamente
  return 0;
}
