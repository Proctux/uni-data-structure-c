#include <stdio.h>
#include <stdlib.h>

/*
  19 - Identifique e corrija os erros em cada uma das instruções a seguir (Nota: pode haver mais de um erro por instrução):
  a) scanf("d", valor);
  b) printf("O produto de %d e %â e %d"\n, x, y) ;
  c) primeiroNumero + segundoNumero = somaDosNumeros
  d) Programa para determinar o maior de tres inteiros /*
  f) Scanf ("%á", umlnteiro) ;
  g) printf("O resto de %d dividido por %â e\n", x, y, x % y);
  h) print("A soma e %d\n, " x + y) ;
  i) Printf("O valor fornecido e: %d\n, &valor);
*/

int main()
{
  // A - You need to use the percentage symbol to scan a value and use the & symbol to attribute a value to a variable;
  int valor;
  scanf("%d", &valor);

  // B - â is not a valid format to print. The \n to break lines have to be into the printf's first argument. You also have to inform the last variable
  // which represents the result value from the multiplication from x by y:
  int x, y, result;
  result = x * y;
  printf("O produto de %d e %d is %d \n", x, y, result);

  // C - the left side of an expression should be a variable which will receive a value. The right side are the variables that will result in something
  // and pass this value to the left side variable expression:
  double primeiroNumero, segundoNumero, somaDosNumeros;
  somaDosNumeros = primeiroNumero + segundoNumero;

  // D
  double valueOne, valueTwo, valueThree, highest;

  printf("Tell me three numbers: ");
  scanf("%lf %lf %lf", &valueOne, &valueTwo, &valueThree);

  if (valueOne > highest)
  {
    highest = valueOne;
  }

  if (valueTwo > highest)
  {
    highest = valueTwo;
  }

  if (valueThree > highest)
  {
    highest = valueThree;
  }

  printf("The highest value is: %lf", highest);

  // F - á is not a valid number format to be printed. If the number is an integer we should use %d;
  int umInteiro;
  printf("%d", umInteiro);

  // G - We can't use 0 to represent the letter O, is not a good practice.
  // â is not a valid number format to be printed. There is a number format missed to print the x module y value.

  printf("O resto de %d dividido por %d e %d\n", x, y, x % y);

  // H - The comma should be outside the first printf's argument:
  printf("A soma é %d \n", x + y);

  // I - printf can't have his first letter in uppercase. There is one double quotes missed in the end.
  // To print values, we don't use the & symbol. It is used for attribute values in scans.
  printf("O valor fornecido é: %d", valor);
}
