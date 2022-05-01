// Write a program to find maximum between two numbers

#include <stdio.h>
int main(){
    int a, b;
    printf("Enter a number:\n");
    scanf("%d", &a);
    printf("Enter another number:\n");
    scanf("%d", &b);
    if (a<b){
        printf("%d is greater than %d", b,a);
    }
    else if (a > b)
    {
        printf("%d is greater than %d", a,b);
    }
    else{
        printf("Both the numbers are equal");
    }
    return 0;
}