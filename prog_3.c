#include<stdio.h>
/*Write a program to check whether a given number is an even number or an odd number.*/
int main()
{
  int n;
  printf("Enter the number: ");
  scanf("%d", &n);
  if(n%2 == 0)
  {
      printf("Number is even number \n");
  }
  else
  {
      printf("Number is odd number \n");
  }
  
  return 0;
}
