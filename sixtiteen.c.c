//Assignment = 16
//1. Write a program to calculate the sum of two matrices each of order 3x3.
#include <stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3],i,j,sum = 0;
    
    printf("Enter the 1st Matrics");
     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {
             scanf("%d",&a[i][j]);
         }
     }
     
       printf("Enter the 2nd Matrics");
       for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {
              scanf("%d",&b[i][j]);
         }
     }
     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {
             c[i][j] = a[i][j] + b[i][j];
         }
         printf("\n");
     }
      printf("\n\nThe Sum of two matrix is : \n");
      for(i=0;i<3;i++)
      {
          for(j=0;j<3;j++)
          {
              printf("%d\t",c[i][j]);
          }
          printf("\n");
      }
     return 0;
     
}
//2. Write a program to calculate the product of two matrices each of order 3x3.
#include <stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3],i,j,sum = 0;
    
    printf("Enter the 1st Matrics");
     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {
             scanf("%d",&a[i][j]);
         }
     }
     
       printf("Enter the 2nd Matrics");
       for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {
              scanf("%d",&b[i][j]);
         }
     }
     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {
             c[i][j] = a[i][j] * b[i][j];
         }
         printf("\n");
     }
      printf("\n\nThe Product of two matrix is : \n");
      for(i=0;i<3;i++)
      {
          for(j=0;j<3;j++)
          {
              printf("%d\t",c[i][j]);
          }
          printf("\n");
      }
     return 0;
     
}
//3. Write a program in C to find the transpose of a given matrix.
#include <stdio.h>
int main()
{
    int a[3][4],i,j;
    
    printf("Enter the Number");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    printf("\nThe Matrix \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    
    printf("\nThe Tranpose of Given Matrix\n");
     for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }
    
    return 0;
}
//4. Write a program in C to find the sum of right diagonals of a matrix.
#include <stdio.h>
int main()
{
    int a[100][100],i,j,sum = 0,n;
    
    printf("Enter Size of Square Matrix");
    scanf("%d",&n);
    
    
    printf("Enter the Matrix Element");
    for(i=0;i<n;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		scanf("%d",&a[i][j]);
    		if(i==j)
    		{
    			sum = sum+a[i][j];
			}
		}
	}
	printf("\nThe Matrix is :\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
	printf("The Sum of Right Diagonal of Matrix = %d",sum);
	
     return 0; 
}
//5. Write a program in C to find the sum of left diagonals of a matrix.
#include <stdio.h>
int main()
{
    int a[100][100],i,j,sum = 0,n;
    
    printf("Enter Size of Square Matrix");
    scanf("%d",&n);
    
    
    printf("Enter the Matrix Element");
    for(i=0;i<n;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		scanf("%d",&a[i][j]);
    		if(i+j==n-1)
    		{
    			sum = sum+a[i][j];
			}
		}
	}
	printf("\nThe Matrix is :\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
	printf("The Sum of Left Diagonal of Matrix = %d",sum);
	
     return 0; 
}
//6. Write a program in C to find the sum of rows and columns of a Matrix.
#include <stdio.h>
int main()
{
    int a[100][100],row,col,i,j;
    int sumrow ,sumcol;
    
    printf("Enter the Rows Matrix");
    scanf("%d",&row);
    
    printf("Enter the Columns Matrix");
    scanf("%d",&col);
    
    
    printf("Enter the Matrix");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nThe Matrix :\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
      for(i=0;i<row;i++)
     {
         sumrow = sumcol = 0;
         for(j=0;j<col;j++)
         {
              sumrow = sumrow + a[i][j];
              sumcol = sumcol + a[j][i];
         }
     printf("SUMROW[%d][%d]  = %d\n",i,j,sumrow);
     printf("SUMCOL[%d][%d] = %d\n",j,i,sumcol);
     }
     return 0;
    
}
//7. Write a program in C to print or display the lower triangular of a given matrix.
#include <stdio.h>
int main()
{
    int a[100][100],i,j,n;
    
    printf("Enter Size of Square Matrix");
    scanf("%d",&n);
    
    
    printf("Enter the Matrix Element");
    for(i=0;i<n;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		scanf("%d",&a[i][j]);
    		if(i<j)
    		{
    			a[i][j] = 0;
			}
		}
	}
	printf("\nThe Lower Triangualr Matrix is :\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
     return 0; 
}
//8. Write a program in C to print or display an upper triangular matrix.
int main()
{
    int a[100][100],i,j,n;
    
    printf("Enter Size of Square Matrix");
    scanf("%d",&n);
    
    
    printf("Enter the Matrix Element");
    for(i=0;i<n;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		scanf("%d",&a[i][j]);
    		if(i>j)
    		{
    			a[i][j] = 0;
			}
		}
	}
	printf("\nThe Upper Triangualr Matrix is :\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
     return 0; 
}
//9. Write a program in C to accept a matrix and determine whether it is a sparse matrix.
#include <stdio.h>
int main()
{
    int a[100][100],i,j,n,count = 0;
    
    printf("Enter Size of Square Matrix");
    scanf("%d",&n);
    
    
    printf("Enter the Matrix Element");
    for(i=0;i<n;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		scanf("%d",&a[i][j]);
    		if(a[i][j] == 0)
    		{
    			count++;
			}
		}
	}
	if(count>=(n*n)/2)
	{
		printf("\nThis Matrix is Sparse Matrix\n");
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("%d\t",a[i][j]);
			}
			printf("\n");
		}
	}
	else
	{
		printf("\nThis Matrix isn't Sparse Matrix\n");
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("%d\t",a[i][j]);
			}
			printf("\n");
		}
	}
	
	
     return 0; 
}
//10. Write a program in C to find the row with maximum number of 1s.
#include <stdio.h>
int main()
{
    int a[100][100],i,j,n,count;
    int max = 0;
    printf("Enter Size of Square Matrix");
    scanf("%d",&n);
    
    
    printf("Enter the Matrix Element");
    for(i=0;i<n;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		scanf("%d",&a[i][j]);
		}
	}
	printf("\nThe Matrix is :\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	 
	 for(i=0;i<n;i++)
	 {
	 	count = 0;
	 	for(j=0;j<n;j++)
	 	{
	 		if(a[i][j] == 1)
	 		{
	 			count ++;
			 }
		 }
	 }
	 if(count>max)
	 {
	 	max = count;
	 }
	 
	 printf("Index of row with maximum 1s is %d",max);
     return 0; 
}