#include <stdio.h>
#include <stdlib.h>

/*
  22 - Dado o algoritmo abaixo, determine
  (a) Escreva as saídas dos dois primeiros printf() das variáveis x = 1 y = 2
  (b) Escreva as saídas do último printf() das variáveis x = 2 y = 1
*/

int main()
{
  int x,
      y,
      tmp;

  printf("x = ");
  scanf("%d", &x);

  printf("y = ");
  scanf("%d", &y);

  printf("\n Os valores de x e y são ... \n");

  tmp = x;
  x = y;
  y = tmp;

  printf("\n x = %d \n y = %d\n", x, y);
}
