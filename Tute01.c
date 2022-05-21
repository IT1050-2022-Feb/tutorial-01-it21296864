/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int a,b;
  float avg;
  printf("Enter the marks");
  scanf("%d",&a);
  printf("Enter the marks");
  scanf("%d",&b);
  avg=(a+b)/2.0;
  printf("The Average mark :%.2f",avg);
  return 0;
}

