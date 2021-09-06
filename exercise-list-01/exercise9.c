#include <stdio.h>
#include <stdlib.h>

/*
  9 - Faça um programa para converter de graus Fahrenheit para Kelvin.
*/

// Farenheit -> Kelvin (F − 32) × 5/9 + 273.15 = 273.15K

int main()
{
  double farenheit, kelvin;

  printf("Tell me the value that want you want to converted from Farenheit to Kelvin: ");
  scanf("%lf", &farenheit);

  kelvin = (farenheit - 32) * 5 / 9 + 273.15;
  printf("The value converted is %lf Kelvin", kelvin);

  return 0;
}
