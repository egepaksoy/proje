#include <stdio.h>

void part1(void) {
  int year;
  printf("****************************\n");
  printf("Please enter a year: ");
  scanf("%d", &year);
  if (year % 4)
    printf("%d is not a leap year", year);
  else
    printf("%d is a leap year", year);
}

void part2(void) {
  int n1, n2, res, n, m = 0;
  char method;
  char oper;

  printf("Enter the format of output (S or I): ");
  scanf("%c", &method);
  if (method == 'I') {
    printf("Enter the operation(+,-,/,*,%,!,^): ");
    scanf("%c", &oper);
  } else if (method == 'S') {
    printf("Enter m and n values: ");
    scanf("%d %d", &m, &n);
  }
  printf("Enter the first operand: ");
  scanf("%d", &n1);
  if (oper != '!') {
    printf("Enter the second operand: ");
    scanf("%d", &n2);
  }
  switch (oper) {
  case ('+'):
    res = n1 + n2;
    break;
  case ('-'):
    res = n1 - n2;
    break;
  case ('*'):
    res = n1 * n2;
    break;
  case ('/'):
    res = n1 / n2;
    break;
  case ('%'):
    res = n1 % n2;
    break;
  case ('^'):
    res = 1;
    for (int i = 0; i < n2; i++) {
      res *= n1;
    }
    break;
  case ('!'):
    res = 1;
    for (int i = 1; i <= n1; i++) {
      res *= i;
    }
    break;
  }
  if (method == 'I') {
    if (oper != '!')
      printf("%d%c%d=%d", n1, oper, n2, res);
    else
      printf("%d!=%d", n1, res);
  }
}

int main(void) {
  part2();
#part2nin yarisi tamam return 0;
}
