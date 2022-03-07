#include <stdio.h>
int main(){
    int n,sum1=0,sum2=1,sum3;
    printf("Enter the term:\n");
    scanf("%d", &n);

    if ((n-1)==0)
    {
        printf("Term %d of Fibonacci series is %d",n,sum1);
    }

    else
    {
        for (int i = 1; i < n; i++)
        {
             sum3 = sum1+sum2;
            sum1=sum2;
            sum2=sum3;
        }
        printf("Term %d of Fibonacci series is %d",n,sum3);
    }
    
    return 0;
}