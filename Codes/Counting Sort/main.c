#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,a[100],max;
    int b[10]= {};
    int c[10]= {};
    printf("Enter how many numbers you want to enter -");
    scanf("%d",&n);
    printf("Enter the numbers -");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        b[a[i]]++;
    }
    max=a[0];
    for(i=0; i<n; i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    printf("The frequencies are -");
    for(i=0; i<=max; i++)
    {
        printf("\n %d  =  %d ",i,b[i]);
    }
    printf("\nThe cumilative frequencies are -");
    c[0]=b[0];
    for(i=0; i<=max; i++)
    {
        c[i+1]=c[i]+b[i+1];
    }
    for(i=0; i<=max; i++)
    {
        printf("\n %d  =  %d ",i,c[i]);
    }
    int d[n];

    for(i=0;i<n;i++)
    {
        d[c[a[i]]--]=a[i];
    }
    printf("\nThe sorted array is -");
    for(i=1; i<=n; i++)
    {
        printf("%d ",d[i]);
    }
    return 0;
}
