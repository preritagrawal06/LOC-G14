// Write a C program to check whether a number is even or odd using functions

#include <stdio.h>

int evenodd(int num)
{
    if (num%2==0)
    {
        printf("Number is Even");
    }
    else
    {
        printf("Number is Odd");
    }
}

int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);
    evenodd(n);
    return 0;
}