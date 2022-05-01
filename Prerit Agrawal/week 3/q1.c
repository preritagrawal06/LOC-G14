// Write a program in C to find the GCD of two numbers using recursion.

#include <stdio.h>

int gcd(int num1,int num2,int n)
{
    if (num2%n==0 && num1%n==0)
    {
        return n;
    }                    
    else
    {
        gcd(num1,num2,n-1);
    }
}

int main(){
    int num1,num2,a;
    printf("Enter two numbers in increasing order: ");
    scanf("%d %d", &num1,&num2);
    a=gcd(num1,num2,num1);
    printf("GCD of %d and %d is %d", num1,num2,a);
    return 0;
}