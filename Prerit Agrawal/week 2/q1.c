#include <stdio.h>
#include <string.h>

void main()
{
    char a[20], b[20], c[40];

    printf("Enter any two words:\n");
    scanf("%s %s", &a, &b);
    strcpy(c, strcat(a,b));         //copying string concatenate of a and b to c.
    printf("%s\n", c);

    //printing reverse using loop.
    int j = strlen(c);
    for (int i = 0; i <= j; i++)
    {
        printf("%c", c[j-i]);
    }
}