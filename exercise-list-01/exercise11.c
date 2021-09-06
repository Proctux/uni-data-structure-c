#include <stdio.h>
#include <stdlib.h>

/*
  11 - Faça um programa que leia uma temperatura em graus Celsius e mostre seu valor emgraus Fahrenheit e Kelvin.
*/

// Celsius -> Fahrenheit (C × 9/5) + 32
// Celsius -> Kelvin C + 273.15

int main()
{
  double celsius, kelvin, fahrenheit;

  printf("Tell me the value in Celsius to be converted in Kelvin and Fahrenheit: ");
  scanf("%lf", &celsius);

  kelvin = celsius + 273.15;
  fahrenheit = (celsius * 9 / 5) + 32;
  printf("The values converted are %lf Fahrenheit and %lf Kelvin", fahrenheit, kelvin);

  return 0;
}
