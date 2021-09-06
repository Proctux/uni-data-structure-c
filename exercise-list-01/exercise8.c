#include <stdio.h>
#include <stdlib.h>

/*
  8 - Faça um programa que converta uma temperatura em Kelvin para Celsius.
*/

// Kelvin -> Celsius 0K − 273.15

int main()
{
  double kelvin, celsius;

  printf("Tell the value in Kelvin to be converted to Celsius: ");
  scanf("%lf", &kelvin);

  celsius = kelvin - 273.15;

  printf("The value converted is %lf Celsius", celsius);

  return 0;
}
