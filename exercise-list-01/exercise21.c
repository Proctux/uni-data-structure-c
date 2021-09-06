#include <stdio.h>
#include <stdlib.h>

/*
  20 - O  que  é  impresso quando cada uma das instruções  seguintes da linguagem C é executada? Se nada for impresso, responda "nada". Admita x = 2ey = 3.
  a) printf("%d", x);
  b) printf("%d", x + x);
  c) printf ("x=") ;
  d) printf("x=%d", x) ;
  e) printf("%ã -%â", x + y, y + x);
  f) z = x + y;
  g) scanf("%ã%ã", &x, &y);
  h) printf("x + y = %ã", x + y);
  i) printf("\n");
*/

// x = 2 e y = 3;

int main()
{
  int x = 2, y = 3;

  // It will print the value of x, which is 2.
  printf("%d", x);

  // It will print the value 4. Because x has the value of 2 and 2 + 2 is equals to 4
  printf("%d", x + x);

  // It will print just a string, without any value after the equals symbol.
  printf("x=");

  // It will print the string x = 2, which is the value of x.
  printf("x=%d", x);

  // It will result in an error, because the ã, â are not valid numer formats.
  // print("%ã - %â", x + , y + x);

  // It will throw an error because we did not declare the variable z before.
  // z = x + y;

  // It will not work because ã is a valid number format;
  // scanf("%ã%ã", &x, &y);

  // It will comment the command line of that printf operation. Commented codes does not execute when we compile a program;
  /* printf("x + y = %ã", x + y); */

  // It will print a blank line:
  printf("\n");

  return 0;
}
