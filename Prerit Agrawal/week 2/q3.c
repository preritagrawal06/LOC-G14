#include <stdio.h>
#include <string.h>
int main(){
    char a[50];
    scanf("%s", a);
    char n=a[0];
    a[0]=a[strlen(a)-1];
    a[strlen(a)-1]=n;
    printf("%s", a);
    return 0;
}