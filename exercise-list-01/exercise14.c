#include <stdio.h>
#include <stdlib.h>

/*
  14 - Faça um programa que leia o valor do salário de um funcionário, calcule e mostre seu novo salário, sabendo que o mesmo recebeu um aumento de 21,3%.
*/

int main()
{
  double salary, increase, newSalary;
  increase = 0.213;

  printf("Tell me your salary: ");
  scanf("%lf", &salary);

  newSalary = salary + (salary * increase);
  printf("Your new salary after the increase is: %lf", newSalary);

  return 0;
}
