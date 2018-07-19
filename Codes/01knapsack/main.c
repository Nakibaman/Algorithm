#include <stdio.h>
#include <stdlib.h>
int max(int a, int b) { return (a > b)? a : b; }
int main()
{
    int n=4,capacity=7;
    int wt[4]={1,3,4,5};
    int value[4]={1,4,5,7};
    int i,j;
    printf("SL W V ");
    for(i=0;i<=capacity;i++)
        printf("%d ",i);
    printf("\n");
    int a[n+1][capacity+1];
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=capacity;j++)
        {
            a[i][j]=0;
        }
    }

    for(i=0;i<=n;i++)
    {
        for(j=0;j<=capacity;j++)
        {
            if (i==0 || j==0)
               a[i][j] = 0;
           else if (wt[i-1] <= j)
                 a[i][j] = max(value[i-1] + a[i-1][j-wt[i-1]],  a[i-1][j]);
           else
                 a[i][j] = a[i-1][j];
        }
    }
    for(i=1;i<=n;i++)
    {
        printf("%d  %d %d",i-1,wt[i-1],value[i-1]);
        for(j=0;j<=capacity;j++)
        {
            printf(" %d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
