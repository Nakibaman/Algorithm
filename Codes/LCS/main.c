#include <stdio.h>
#include <stdlib.h>

int main()
{
    int seq1[6]={1,3,3,4,1,2};
    int seq2[7]={3,5,4,5,1,6,2};
    int i,j,max=0;
    int table[8][7];
    for(i=0;i<7;i++)
    {
        if(i==0)
        printf("  %d ",i);
        else
        printf("%d ",seq1[i-1]);
    }
    printf("\n");
    for(i=0;i<8;i++)
    {
        if(i==0)
        printf("%d ",i);
        else
        printf("%d ",seq2[i-1]);
        for(j=0;j<7;j++)
        {
        table[i][j]=0;
        printf("%d ",table[i][j]);
        }
        printf("\n");
    }
    for(i=1;i<8;i++)
    {
        for(j=1;j<7;j++)
        {

            if(seq2[i-1]==seq1[j-1])
            {
                table[i][j]=table[i-1][j-1]+1;
            }
            else
            {
                if(table[i-1][j]>=table[i][j-1])
                table[i][j]=table[i-1][j];

            else
            {
                table[i][j]=table[i][j-1];
            }
            }
        }

    }
    for(i=0;i<7;i++)
    {
        if(i==0)
        printf("  %d ",i);
        else
        printf("%d ",seq1[i-1]);
    }
    printf("\n");
    for(i=0;i<8;i++)
    {
        if(i==0)
        printf("%d ",i);
        else
        printf("%d ",seq2[i-1]);
        for(j=0;j<7;j++)
        {

        printf("%d ",table[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<8;i++)
    {
        for(j=0;j<7;j++)
        {
            if(max<table[i][j])
                max = table[i][j];
        }
    }

    printf("Length of LCS: %d",max);

    return 0;
}
