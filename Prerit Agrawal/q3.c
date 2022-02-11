// Write a C program to check whether a number is even or odd using switch case

#include <stdio.h>
int main(){
    int a;
    printf("Enter a number:\n");
    scanf("%d", &a);
    switch (a%2)
    {
    case 0:
        printf("%d is an even number.", a);
        break;
    case 1:
        printf("%d is an odd number.", a);
    
    default:
        printf("Please enter a positive number");
        break;
    }
    return 0;
}