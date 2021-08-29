#include <stdio.h>
#include <stdlib.h>

/*
  7 - Faça um programa que leia dois números inteiros e calcule sua soma, subtração, multiplicação e divisão.
*/

int main()
{
  int numberOne, numberTwo, sum, decrease, times;
  double divisionOne, divisionTwo;

  printf("Tell me two integer numbers to be sum, decreased, divided and multiplied by each other: ");
  scanf("%d %d", &numberOne, &numberTwo);

  sum = numberOne + numberTwo;
  decrease = numberOne - numberTwo;
  times = numberOne * numberTwo;
  divisionOne = numberOne / numberTwo;
  divisionTwo = numberTwo / numberOne;

  printf("The sum is: %d. The decrease is: %d. The division from %d by %d is: %lf. The division between %d by %d is: %lf. The multiplication between then is: %d", sum, decrease, numberOne, numberTwo, divisionOne, numberTwo, numberOne, divisionTwo, times);
}
