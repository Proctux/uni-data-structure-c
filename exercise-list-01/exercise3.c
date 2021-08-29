#include <stdio.h>
#include <stdlib.h>

/*
  3 - A  imobiliária  Central  vende  apenas  terrenos  retangulares.
  Faça  um  algoritmo  para  ler  as dimensões de um terreno e
  depois exibir a área do terreno.
*/

int main()
{
  float height, width;
  double fieldArea;

  printf("Tell me the field width in m2: ");
  scanf("%f", &width);
  printf("Now, the field height in m2: ");
  scanf("%f", &height);

  if (height == width)
  {
    printf("Sorry, this field is not rectangular. So, we don't sell it");
  }
  else
  {
    fieldArea = width * height;
    printf("The field area is: %f m2", fieldArea);
  }
}
