#include <stdio.h>
#include <stdlib.h>

/*
  5 - Faça um programa que leia um número inteiro, calcule a décima parte deste número e exiba o resultado.
*/

int main()
{
  int number;
  double tenPercentNumber;

  printf("Choose an integer number: ");
  scanf("%d", &number);

  tenPercentNumber = number / 10.0;
  printf("10%% of the choosen number is: %lf", tenPercentNumber);

  return 0;
}
