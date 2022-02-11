#include <stdio.h>
int main(){
    int a,b,c,d,e,total;
    float avg;
    printf("Enter marks of all subjects seperated by a space:\n");
    scanf("%d %d %d %d %d", &a,&b,&c,&d,&e);
    total = a+b+c+d+e;
    avg = total/5;
    printf("Total marks: %d\n Average marks: %f", total, avg);
    return 0;
}