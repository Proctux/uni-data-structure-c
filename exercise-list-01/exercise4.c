#include <stdio.h>
#include <stdlib.h>

/*
  4 - Faça um programa que leia um número inteiro, calcule o seu quadrado e exiba o resultado.
*/

int main()
{
  int number, squareNumber;

  printf("Choose an integer number: ");
  scanf("%d", &number);

  squareNumber = number * number;
  printf("The square of that choosen number is: %d", squareNumber);

  return 0;
}
