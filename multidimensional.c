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
            printf("enter the element of b%d%d\n",i,j);
            scanf("%d",&b[i][j]);

        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("the sum of a%d%d and b%d%d is %d\n",i,j,i,j,a[i][j]+b[i][j]);

        }
    }
return 0;
}