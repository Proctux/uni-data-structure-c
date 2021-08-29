#include <stdio.h>
#include <stdlib.h>

/*
  12 - Faça um programa para calcular a área de um triângulo retângulo. O tamanho da basee altura do triângulo devem ser informados pelo usuário.
*/

// Area = height * base / 2

int main()
{
  double height, base, area;

  printf("Tell the height of the triangle: ");
  scanf("%lf", &height);
  printf("Now, the base: ");
  scanf("%lf", &base);

  area = base * height / 2;

  printf("The area from this triangle rectangle is %lf ", area);
}
