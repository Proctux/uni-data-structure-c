#include <stdio.h>
#include <stdlib.h>

/*
  6 - Faça um programa que leia dois números, some estes números e exiba o resultado.
*/

int main()
{
  double numberOne, numberTwo, total;

  printf("Tell me two values to be sum: ");
  scanf("%lf %lf", &numberOne, &numberTwo);

  total = numberTwo + numberOne;
  printf("The sum between then is: %lf", total);
}
