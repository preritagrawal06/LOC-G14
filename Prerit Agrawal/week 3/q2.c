//Write a C program to print if a number is prime using recursion.

#include <stdio.h>
int prime(int num,int n)
{
    while (n>=2)
    {
        if (num%n == 0)
        {
            printf("Number is not prime");
            break;
        }
        else if (n==2)
        {
            printf("Number is prime");
            break;
        }
        else
        {
            prime(num,n-1);
        }
        break;
    }
    
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    prime(num,num-1);
    return 0;
}