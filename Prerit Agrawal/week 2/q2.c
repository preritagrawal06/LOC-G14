#include <stdio.h>
int main(){
    int numbers[10],odd=0,even=0;
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &numbers[i]);
    }
    for (int i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++)
    {
        if (numbers[i]%2==0)
        {
            even = even+numbers[i];
        }
        else
        {
            odd = odd+numbers[i];
        }
    }
    printf("Sum of odd numbers is: %d\n", odd);
    printf("Sum of even numbers is: %d", even);
    return 0;
}