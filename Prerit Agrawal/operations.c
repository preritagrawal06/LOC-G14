#include <stdio.h>
int main(){
    int a,b,c,d,e,f;
    printf("Enter a number:\n");
    scanf("%d", &a);
    printf("Enter another number:\n");
    scanf("%d", &b);
    switch (1)
    {
    case 1:
        c = a+b;
        printf("addition of two numbers is: %d \n", c);
    case 2:
        d = b-a;
        printf("Substration of two numbers is: %d \n", d);
    case 3:
        e = a*b;
        printf("Multiplication of two numbers is: %d \n", e);
    case 4:
        f = a/b;
        printf("Division of two number is: %d \n", f);
    default:
        break;
}
return 0;
}