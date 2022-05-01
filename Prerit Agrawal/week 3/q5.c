#include <stdio.h>
int main()
{
    int length, i, largest;
    printf("Enter the no. of datas in array : ");
    scanf("%d", &length);
    int a[length];
    printf("Enter %d values:\n", length);
    for (i = 0; i < length; i++)
    {
        printf("%d : ", i+1);
        scanf("%d", &a[i]);
    }
    largest = a[0];
    for (i = 1; i < length; i++)
        if (largest <= a[i])
            largest = a[i];
    printf("The largest input is: %d", largest);
    return 0;
}