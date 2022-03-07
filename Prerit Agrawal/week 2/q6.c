#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        if (i==0)
        {
            for (int j = 0; j < n; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        else if (i==n-1)
        {
            for (int j = 0; j < n; j++)
            {
                printf("*");
            }
            
        }
        else
        {
            for (int j = 0; j < n; j++)
            {
                if (j==0)
                {
                    printf("*");
                }
                else if (j==n-1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }    
            }
            printf("\n");  
        }
    }
    
    return 0;
    
}