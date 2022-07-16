#include<stdio.h>
/*Write a program to check whether a given number is positive or non-positive.*/
int main()
{
  int n;
  printf("Enter the number: ");
  scanf("%d", &n);
  if(n>=0)
  {
      printf("Number is possitive \n");
  }
  else
  {
      printf("Number is non-possitive \n");
  }
  
  return 0;
}
