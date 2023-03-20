/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int mark1,mark2;
float avg;

int main() {

  printf("Enter the marks of 1");
  scanf("%d", &mark1);

  printf("Enter the marks of 2");
  scanf("%d", &mark2);

  avg = (mark1 + mark2)/2;
  printf("Average is : %.2f",avg);
  
  
  return 0;
}

