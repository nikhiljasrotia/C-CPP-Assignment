//ASSIGNMENT = 11
//1. Write a function to calculate LCM of two numbers. (TSRS)
#include <stdio.h>
int lcm(int,int);
int main()
{
   int x,y,z;
   printf("Enter Two Postive Number");
   scanf("%d %d",&x,&y);
   
   z = lcm(x,y);
   
   printf("The LCM of %d and %d is %d",x,y,z);
   
   return 0;
}
int lcm(int a ,int b)
{
    int max;
    max = a>b?a:b;
    while(max)
    {
        if(max%a==0&&max%b==0)
        {
            break;
        }
        max++;
    }
    
    return max;
}
//2. Write a function to calculate HCF of two numbers. (TSRS)
#include <stdio.h>
int HCF(int,int);
int main()
{
   int x,y,z;
   printf("Enter Two Postive Number");
   scanf("%d %d",&x,&y);
   
   z = HCF(x,y);
   
   printf("The HCF of %d and %d is %d",x,y,z);
   
   return 0;
}
int HCF(int a ,int b)
{
    int min;
    min = a<b?a:b;
    while(min)
    {
        if(a%min==0&&b%min==0)
        {
            break;
        }
        min--;
    }
    
    return min;
}
//3. Write a function to check whether a given number is Prime or not. (TSRS)

#include <stdio.h>
int PrimeNumber(int);
int main()
{
   int x,z;
   printf("Enter Number");
   scanf("%d",&x);
   
   z = PrimeNumber(x);
   
   if(x==z)
   {
       printf("Prime Number");
   }
   else
   {
       printf("Not a Prime Number");
   }
   return 0;
}
int PrimeNumber(int num)
{
   int i,j;
   for(i=1;i<=num;i++)
   {
       for(j=2;j<i;j++)
       {
           if(i%j==0)
           {
               break;
           }
       }
   }
    return j;
}
//4. Write a function to find the next prime number of a given number. (TSRS)

#include <stdio.h>
int NextPrimeNumber(int);
int main()
{
   int x,z;
   printf("Enter Number");
   scanf("%d",&x);
   
   z = NextPrimeNumber(x);
   printf("The NextPrimeNumber of %d is %d",x,z);

   return 0;
}
int NextPrimeNumber(int num)
{
   int i,j;
   i = num + 1;
   while(i)
   {
       for(j=2;j<i;j++)
       {
           if(i%j==0)
           {
               break;
           }
       }
       if(i==j)
       {
           break;
       }
       i++;
   }
   return j;
}
//5. Write a function to print first N prime numbers (TSRN)

#include <stdio.h>
void PrimeNumber(int num);
int main()
{
    int n;
    printf("Enter N Number");
    scanf("%d",&n);
    
     PrimeNumber(n);
    
}
void PrimeNumber(int num)
{
    int i,j;
    for(i=1;i<=num;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                break;
            }
        }
        if(i==j)
        {
            printf("%d ",j);
        }
    }
}
//6. Write a function to print all Prime numbers between two given numbers. (TSRN)
#include <stdio.h>
void PrimeNumber(int ,int);
int main()
{
    int x,y;
    printf("Enter Range");
    scanf("%d %d",&x,&y);
    
     PrimeNumber(x,y);
    
}
void PrimeNumber(int a,int b)
{
    int i,j;
    for(i=a;i<=b;i++)
    {
        for(j=2;j<b;j++)
        {
            if(i%j==0)
            {
                break;
            }
        }
        if(i==j)
        {
            printf("%d ",j);
        }
    }
}
//7. Write a function to print first N terms of Fibonacci series (TSRN)

#include <stdio.h>
void fibonacci(int num);
int main()
{
    int n;
    printf("Enter N Number");
    scanf("%d",&n);

    fibonacci(n);
}
void fibonacci(int num)
{
    int a,b,c,i;
    a = 0;
    b = 1;
    for(i = 2;i<=num;i++)
    {
        c = a + b;
        printf("%d ",c);
        a = b;
        b = c;
    }
}
//8. Write a function to print PASCAL Triangle. (TSRN)

#include <stdio.h>
void pascal(int num);
int main()
{
    int n;
    printf("Enter Pascal Rows");
    scanf("%d",&n);
    
    pascal(n);
    
    return 0;
}
void pascal(int num)
{
    int i,j,k,c;
    for(i=0;i<num;i++)
    {
        for(k=i;k<num - 1;k++)
        {
            printf(" ");
        }
        
        for(j=0;j<i;j++)
        {
            if(i==0||j==0)
            {
                c = 1;
            }
            else
            {
                c = (c*(i-j + 1))/j;
            }
             printf("%d ",c);
        }
        printf("\n");
    }
}
//9. Write a program in C to find the square of any number using the function.
#include <stdio.h>
int square(int num);
int main()
{
    int a,b;
    printf("Enter Number");
    scanf("%d",&a);
    b = square(a);
    printf("The Square is %d",b);
    
    return 0;
}
 int square(int num)
{
    int s;
    s = num * num;
    return s;
}
//10. Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the
//function.

#include<stdio.h>
int fact(int num);
int main()
{
    int sum = 0;
    sum = fact(1)/1+fact(2)/2+fact(3)/3+fact(4)/4+fact(5)/5;
    printf("The Sum is %d",sum);
    
    return 0;
}

int fact(int num)
{
    int i,fact = 1;
     i = 1;
     while(i<=num)
     {
         fact = fact * i;
         i++;
     }
     
     return fact;
}