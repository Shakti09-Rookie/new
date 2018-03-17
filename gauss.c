#include<stdio.h>
void main()
{
    int i,j,r[10],mat[10][10],c,n,k,sum;
    printf("enter the order of matrix:\n");
    scanf("%d",&n);
    printf("enter the numbers\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n+1;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    printf("your equation:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n+1;j++)
        {
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }

    for(j=0;j<n;j++)
    {
        for(i=0;i<n;i++)
        {
            if(i>j)
            {
                c=mat[i][j]/mat[j][j];
                for(k=0;k<n+1;k++)
                {
                mat[i][k]=mat[i][k]-c*mat[j][k];
                }
            }
        }
    }
    printf("uppertriangle:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n+1;j++)
        {
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
    r[n-1]=mat[n-1][n]/mat[n-1][n-1];
    for(i=n-1;i>=0;i--)
    {
        sum=0;
        for(j=i+1;j<n;j++)
        {
            sum=sum+mat[i][j]*r[j];
        }
        r[i]=(mat[i][n]-sum)/mat[i][i];
    }
    printf("answer;\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",r[i]);
    }
}
