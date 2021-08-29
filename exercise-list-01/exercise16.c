#include <stdio.h>
#include <stdlib.h>

/*
  16 - A importância de R$ 780.000,00 será dividida entre três ganhadores de um concurso.
  Sendo que da quantia total:
  • O primeiro ganhador receberá 46%;
  • O segundo receberá 32%;
  • O terceiro receberá o restante.
  Calcule e imprima a quantia ganha por cada um dos ganhadores.
*/

int main()
{
  double prize, firstWinnerPercentage, firstWinnerAmount, secondWinnerPercentage, secondWinnerAmount, thirdWinnerPercentage, thirdWinnerAmount;
  firstWinnerPercentage = 0.46;
  secondWinnerPercentage = 0.32;
  thirdWinnerPercentage = 100 - (firstWinnerPercentage * 100) - (secondWinnerPercentage * 100);
  prize = 780000.00;

  firstWinnerAmount = prize * firstWinnerPercentage;
  printf("The first winner will receive %lf equivalent to 46%% of prize amount \n", firstWinnerAmount);

  secondWinnerAmount = prize * secondWinnerPercentage;
  printf("The second winner will receive %lf equivalent to 32%% of prize amount \n", secondWinnerAmount);

  thirdWinnerAmount = prize * thirdWinnerPercentage / 100;
  printf("The third winner will receive %lf equivalent to %lf%% of prize amount \n", thirdWinnerAmount, thirdWinnerPercentage);
}
