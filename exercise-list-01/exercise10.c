#include <stdio.h>
#include <stdlib.h>

/*
  10 - Faça um programa para converter de Kelvin para graus Fahrenheit.
*/

// Kelvin -> Fahrenheit (K − 273.15) × 9/5 + 32

int main()
{
  double kelvin, fahrenheit;

  printf("Tell the value in Kelvin to be converted in Fahrenheit: ");
  scanf("%lf", &kelvin);

  fahrenheit = (kelvin - 273.15) * 9 / 5 + 32;
  printf("The value converted is %lf Fahrenheit", fahrenheit);
}
