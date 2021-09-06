#include <stdio.h>
#include <stdlib.h>

/*
  17 - Faça  um  programa  que  calcule  a  média  ponderada  das  notas  de  três  provas.
  A  primeira e  a segunda prova têm peso 1 e a terceira prova tem peso 2.
  O programa deve imprimir a média obtida pelo aluno.
*/

int main()
{
  double gradeOne, gradeTwo, gradeThree, media;

  printf("Tell the students A, B and C grade separated by space (ex: [10, 8, 9]): ");
  scanf("%lf %lf %lf", &gradeOne, &gradeTwo, &gradeThree);

  media = (gradeOne + gradeTwo + (gradeThree * 2)) / 4;
  printf("The student's media is: %lf", media);

  return 0;
}
