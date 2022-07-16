#include<stdio.h>
/*Write a program to check whether a given number is an even number or an odd number without using % operator*/
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    /*check last binary digit is 1 or not via Bitwise operator*/
    if(n&1)
    {
        printf("Entered number is odd number\n");
    }
    else
    {
        printf("Entered number is even number \n");
    }
    
    return 0;
}
