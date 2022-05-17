/**
  @file program1.c
  @brief Pretty nice program.
  @details This program is used to sum two values. One of them is a constant.
  @author Elsa Alves
  @version 0.9a
*/
#include<stdio.h>

/// Global variable with value 20.
int a = 20;

int makeSum(int b)
{
  return(a + b);
}

/**
  This is the main function of the program.
*/
int main()
{
  int b = 20;
  int sum = makeSum(b);
  printf("%d+%d=%d\n", a, b, sum);
  return 0;
}
