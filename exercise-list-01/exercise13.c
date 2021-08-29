#include <stdio.h>
#include <stdlib.h>

/*
  13 - Faça um programaque leia três valores e apresente, como resultado final, a soma dos quadrados dos três valores lidos.
*/

int main()
{
  double valueOne, valueTwo, valueThree, sum;

  printf("Tell me 3 values to be sum after get their square: ");
  scanf("%lf %lf %lf", &valueOne, &valueTwo, &valueThree);

  sum = (valueOne * valueOne) + (valueTwo * valueTwo) + (valueThree * valueThree);

  printf("The final result is %lf", sum);
}
