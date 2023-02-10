#include<stdio.h>
int main()
{
    int a[3][3];
    int b[3][3];
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("enter the element of a%d%d\n",i,j);
            scanf("%d",&a[i][j]);

        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        { 
            b[i][j]=a[j][i];

        }
    }
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        {
            printf("%d\t",b[i][j]);
        }
    }
    return 0;
}