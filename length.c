#include <stdio.h>
int main(){
    float cm, m, km;
    printf("Enter length:\n");
    scanf("%f", &cm);
    m = cm/100;
    km = m/1000;
    printf("Length(in m): %f\nLength(in km): %f", m, km);
    return 0;
}