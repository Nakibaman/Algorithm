#include <stdio.h>
#include <stdlib.h>

int main()
{

    int m,n,i,j;
    //task - 1
    printf("Enter the 1st Seq Size -");
    scanf("%d",&m);
    printf("Enter the 2nd Seq Size -");
    scanf("%d",&n);
    int a[m],b[n];
    printf("Enter 1st Seq -");
    for(i=1;i<=m;i++)
        scanf("%d",&a[i]);
    printf("Enter 2nd Seq -");
    for(i=1;i<=n;i++)
        scanf("%d",&b[i]);

    //task - 2
    int table[n+1][m+1];
    printf("\n Before applying DP - \n ");
    for(i=0;i<=m;i++)
    {
        if(i==0)
            printf(" %d ",i);
        else
        printf("%d ",a[i]);
    }
    printf("\n");
    for(j=0;j<=n;j++)
    {

        if(j==0)
        {
            for(i=0;i<=m;i++)
            {
            table[j][i]=0;
            }
            printf("%d",j);
            for(i=0;i<=m;i++)
            {
                printf(" %d",table[j][i]);
            }
            printf("\n");
        }
        else
        {

            printf("%d",b[j]);
            for(i=0;i<=m;i++)
            {
                if(i==0)
                    table[j][i]=0;
                printf(" %d",table[j][i]);
            }
            printf("\n");

        }
    }

    //task - 3
    printf("\n After applying DP - \n ");
    for(j=1;j<=n;j++)
    {
        for(i=1;i<=m;i++)
        {
            if(b[j]==a[i])
            {
                table[j][i]=table[j-1][i-1]+1;
            }
            else if(table[j][i-1]>table[j-1][i])
            {
                table[j][i]=table[j][i-1];
            }
            else
            {
                table[j][i]=table[j-1][i];
            }
        }
    }

    for(i=0;i<=m;i++)
    {
        if(i==0)
            printf(" %d ",i);
        else
        printf("%d ",a[i]);
    }
    printf("\n");
    for(j=0;j<=n;j++)
    {

        if(j==0)
        {
            for(i=0;i<=m;i++)
            {
            table[j][i]=0;
            }
            printf("%d",j);
            for(i=0;i<=m;i++)
            {
                printf(" %d",table[j][i]);
            }
            printf("\n");
        }
        else
        {

            printf("%d",b[j]);
            for(i=0;i<=m;i++)
            {
                if(i==0)
                    table[j][i]=0;
                printf(" %d",table[j][i]);
            }
            printf("\n");

        }
    }
    return 0;
}
