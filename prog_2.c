#include<stdio.h>
/*Write a program to check whether a given number is divisible by 5 or not*/
int main()
{
  int n;
  printf("Enter the number: ");
  scanf("%d", &n);
  if(n%5 == 0)
  {
      printf("Number is divisible by 5 \n");
  }
  else
  {
      printf("Number is not divisible by 5 \n");
  }
  
  return 0;
}
