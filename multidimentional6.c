#include<stdio.h>
int main()
{
    int a[3][3];
    int i,j,sum;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("enter the a%d%d element of a",i,j);
            scanf("\n%d",&a[i][j]);
            
            
        }
    }
    for(i=0;i<3;i++)
    { 
        printf("\n");
        for(j=0;j<3;j++)
         {
            printf("%d",a[i][j]);
         }
    }
    for(i=0;i<3;i++)
    {  
        sum=0;
        for(j=0;j<3;j++)
        {
            sum=sum+a[i][j];
        }
        printf("\nsum of row %d is %d",i,sum);
    }
    for(j=0;j<3;j++)
    {
        sum=0;
        for(i=0;i<3;i++)
        {
            sum=sum+a[i][j];
        }
        printf("\nsum of column %d is %d",j,sum);
    }
    return 0;
}