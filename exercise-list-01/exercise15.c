#include <stdio.h>
#include <stdlib.h>

/*
  15 - Leia o valor do raio de uma esfera e calcule a área de sua superfície e o volume da esfera.
*/

// Area = 4 * π * r2
// Volume = (4 * π * r3) / 3
// PI = 3.14

int main()
{
  double area, volume, pi, radius;
  pi = 3.14;

  printf("Tell me the sphere's radius: ");
  scanf("%lf", &radius);

  area = 4 * pi * (radius * radius);
  volume = (4 * pi * (radius * radius * radius)) / 3;
  printf("The volume is %lf and the area is %lf", volume, area);
}
