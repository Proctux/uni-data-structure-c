#include <stdio.h>
#include <stdlib.h>

/*
  18 - Escreva uma instrução (ou comentário) para realizar cada um dos pedidos seguintes:
  a) Crie um comentário declarando que um programa calculará o produto de três números inteiros.
  b) Declare as variáveis x, y, z e resultado como sendo do tipo int.
  c) Peça ao usuário para digitar três números inteiros.
  d) Leia os três números inteiros fornecidos através do teclado e armazene-os nas variáveis x, y e z.
  e) Calcule o produto dos três números inteiros contidos nas variáveis x, y e z e atribua o resultado à variável resultado.
  f) Imprima "O produto e" seguido do valor da variável resultado.
*/

// this program will calculate the multiplication between three integer numbers
int main()
{
  int x, y, z, result;

  printf("Tell me three integer numbers: ");
  scanf("%d %d %d", &x, &y, &z);

  result = x * y * z;
  printf("The result is %d", result);
}
