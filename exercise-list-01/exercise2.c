#include <stdio.h>
#include <stdlib.h>

/*
  2 - Crie um programa para ler 3 notas e mostrar a média delas.
*/

int main()
{
  float gradeOne, gradeTwo, gradeThree;
  printf("Tell the grades A, B and C separated by space (ex: [10 9.5 8]): ");
  scanf("%f %f %f", &gradeOne, &gradeTwo, &gradeThree);
  double media = (gradeOne + gradeTwo + gradeThree) / 3;
  printf("The student media is: %f", media);

  return 0;
}
