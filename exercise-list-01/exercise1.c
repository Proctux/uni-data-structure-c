#include <stdio.h>
#include <stdlib.h>

/* 1 - A  conversão  de  graus  Fahrenheit  para  centígrados  e  obtido  por 𝐶=59(𝐹−32).
Fazer  um algoritmo que calcule a temperatura graus Fahrenheitpara uma dada temperatura
informada pelo usuário. */

// C = 5 / 9 * (f - 32)

/* When you have a variable of type double, you must use the %lf instead of %f to read inputs.
%f does not work for doubles. */

int main()
{
  float celsius, fahrenheit;
  printf("Tell me the fahrenheit value to be converted to Celsius: ");
  scanf("%f", &fahrenheit);
  celsius = (5.0 / 9) * (fahrenheit - 32);
  printf("The equivalent value in Celsius is %f", celsius);

  return 0;
}
