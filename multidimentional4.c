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
        printf("\n");
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
    }
    printf("\nsum of right diagonal is %d",a[0][2]+a[1][1]+a[2][0]);
    printf("\n");
    return 0;
}