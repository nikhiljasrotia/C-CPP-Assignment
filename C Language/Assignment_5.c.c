//ASSIGNMENT 5
//1. Write a program to print MySirG N times on the screen
#include<stdio.h>
int main()
{
   int n,i;
   printf("Enter N Number");
   scanf("%d",&n);
   i = 1;
   while(i<=n){
       printf("MYSIRG\n");
       i++;
   }
   
    return 0;
}

//2. Write a program to print the first N natural numbers.
#include<stdio.h>
int main()
{
   int n,i;
   printf("Enter N Number");
   scanf("%d",&n);
   i = 1;
   while(i<=n){
       printf("%d\n",i);
       i++;
   }
   
    return 0;
}

//
//3. Write a program to print the first N natural numbers in reverse order
#include<stdio.h>
int main()
{
   int n,i;
   printf("Enter N Number");
   scanf("%d",&n);
   i = 1;
   while(i<=n){
       printf("%d\n",(n+1)-i);
       i++;
   }
   
    return 0;
}

//4. Write a program to print the first N odd natural numbers
#include<stdio.h>
int main()
{
   int n,i;
   printf("Enter N Number");
   scanf("%d",&n);
   
   i = 1;
   while(i<=n){
       if(i%2!=0){
           printf("%d ",i);
       }
       i++;
   }
    return 0;
}

//5. Write a program to print the first N odd natural numbers in reverse order.
#include<stdio.h>
int main()
{
   int n,i;
   printf("Enter N Number");
   scanf("%d",&n);
   
   i = 1;
   while(i<=n){
       printf("%d ",(2*n + 1) -(2*i));
       i++;
   }
    return 0;
}


//6. Write a program to print the first N even natural numbers
#include<stdio.h>
int main()
{
   int n,i;
   printf("Enter N Number");
   scanf("%d",&n);
   
   i = 1;
   while(i<=n){
      if(i%2==0){
          printf("%d ",i);
      }
       i++;
   }
    return 0;
}

//7. Write a program to print the first N even natural numbers in reverse order
#include<stdio.h>
int main()
{
   int n,i;
   printf("Enter N Number");
   scanf("%d",&n);
   
   i = 1;
   while(i<=n){
       printf("%d ",(2*n + 2) -(2*i));
       i++;
   }
    return 0;
}


// 8. Write a program to print squares of the first N natural numbers
#include<stdio.h>
int main()
{
   int n,i;
   printf("Enter N Number");
   scanf("%d",&n);
   
   i = 1;
   while(i<=n){
       printf("%d ",i*i);
       i++;
   }
    return 0;
}

//9. Write a program to print cubes of the first N natural numbers
#include<stdio.h>
int main()
{
   int n,i;
   printf("Enter N Number");
   scanf("%d",&n);
   
   i = 1;
   while(i<=n){
       printf("%d ",i*i*i);
       i++;
   }
    return 0;
}


//10. Write a program to print a table of N.

#include<stdio.h>
int main()
{
   int n,i,k;
   printf("Enter N Number");
    scanf("%d",&n);
   printf("Enter Table");
   scanf("%d",&k);
   
   i = 1;
   while(i<=n){
       printf("%d x %d = %d\n",k,i,k*i);
       i++;
   }
    return 0;
}
