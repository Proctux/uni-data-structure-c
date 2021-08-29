#include <stdio.h>
#include <stdlib.h>

/*
  23 - Seja  o  programa  abaixoe teste  o  programa  e  verifique  se  o  mesmo  funciona  corretamente.
  Explique como funcionamas funções printf e scanf.
*/

int main()
{
  int a, b;
  printf("Entre com dois valores inteiros :");
  scanf("%d %d", &a, &b); // Scanf receive inputs from the user and pass those inputs to the informed variables.

  printf("\nA soma de %d e %d resulta em %d", a, b, a + b); // Printf print the values of variables and work as outputs.
  printf("\nA subtração de %d e %d resulta em %d", a, b, a - b);
  printf("\nO produto de %d e %d resulta em %d", a, b, a * b);
  printf("\nO quoeficiente de %d e %d resulta em %d", a, b, (float)a / (float)b);

  return 0;
}
