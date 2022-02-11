#include <stdio.h>
int main(){
    int a;
    printf("Enter a number:\n");
    scanf("%d", &a);
    switch (a>=0)
    {
    case 0:
        printf("%d is a negetive number", a);
        break;
    case 1:
        if (a>0){
            printf("%d is a positive number", a);
        }
        else{
            printf("You entered 0");
        }
        break;
    }
}