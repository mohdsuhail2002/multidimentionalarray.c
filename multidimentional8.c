#include <stdio.h>  
   
int main()  
{  
    int rows, cols; 
    int a[][3] = {     
                    {1, 2, 3},  
                    {8, 6, 4},  
                    {4, 5, 6}  
                 };  
    rows = (sizeof(a)/sizeof(a[0]));  
    cols = (sizeof(a)/sizeof(a[0][0]))/rows; 
      
    if(rows != cols){  
        printf("Matrix should be a square matrix\n");  
    }  
    else{  
        printf("upper triangular matrix: \n");  
        for(int i = 0; i < rows; i++){  
            for(int j = 0; j < cols; j++){  
              if(j < i)  
                printf("0");  
              else  
                printf("%d ", a[i][j]);  
            }  
            printf("\n");  
        }  
    } 
    return 0;
}