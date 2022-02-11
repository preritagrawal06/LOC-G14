#include <stdio.h>
int main(){
    float a1, a2, a3;
    int angle;
    printf("Enter angles seperated by a space:\n");
    scanf("%f %f %f", &a1, &a2, &a3);
    angle = a1+a2+a3;
    if (angle==180) 
    {
        printf("Triangle is possible with these angles.");
    }
    else{
        printf("Triangle with these angles is not possible.");
    }
    return 0;
}