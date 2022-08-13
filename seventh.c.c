/ASSIGNMENT = 7

//1. Write a program to find the Nth term of the Fibonnaci series.
 
 #include <stdio.h>
int main()
{
  int i,nth,a,b,c=0;
  a = 0;
  b = 1;
  nth = 12;
  
  for(i=2;i<=nth;i++)
  {
      c = a + b;
      a = b;
      b = c;
  }
  
  printf("fb(%dth) = %d",nth,c);  // OUTPUT is = fb(12th) = 144
  
  return 0; 
}



//2. Write a program to print first N terms of Fibonacci series

#include <stdio.h>
int main()
{
  int i,n,a,b,c = 0;
  a = 0;
  b = 1;
  printf("Enter the N Number");
  scanf("%d",&n);
  
  for(i=2;i<=n;i++)
  {
      c = a + b;
      printf("%d ", c);
      a = b;
      b = c;
  }
  return 0; 
}

//3. Write a program to check whether a given number is there in the Fibonacci
//series or not.

#include <stdio.h>
int main()
{
   int n,a,b,c = 0;
   a = 0;
   b = 1;
   printf("Enter Number");
   scanf("%d",&n);
   
   if(n==a||n==b)
   {
       printf("This Number is Fibonacci Number");
   }
   else
   {
       c = a + b;
       while(c < n)
       {
         c = a + b;
         a = b;
         b = c;
         
       }
       if(c == n)
       {
           printf("This Number is Fibonacci Number");
       }
       else
       {
           printf("This Number isn't Fibonacci Number");     
       }
       
    return 0;
    
}
}

//4. Write a program to calculate HCF of two numbers

#include <stdio.h>
int main()
{
    int a,b,min;
    printf("Enter Two Number");
    scanf("%d %d" ,&a,&b);
    
     min = a<b?a:b;
     
     while(1)
     {
         if(a%min==0&&b%min==0){
             break;
         }
         min--;
     }
    printf("HCF is %d",min);
    
    return 0;
}

//5. Write a program to check whether two given numbers are co-prime
//numbers or not

#include <stdio.h>
int main()
{
    int a,b,min;
    printf("Enter Two Number");
    scanf("%d %d" ,&a,&b);
    
     min = a<b?a:b;
     
     while(1)
     {
         if(a%min==0&&b%min==0){
             break;
         }
         min--;
     }
      
     if(min==1)
     {
         printf("Co - Prime Number");
     }
     else{
         printf("Not a Co-Prime Number");
     }
     
    
    return 0;
}
//6. Write a program to print all Prime numbers under 100

#include <stdio.h>
int main()
{
  int i,j;
  for(i=1;i<=100;i++)
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
          printf("%d ",i);
      }
  }
  return 0; 
}

//7. Write a program to print all Prime numbers between two given numbers

#include <stdio.h>
int main()
{
  int i,j,range1,range2;
  printf("Enter Range");
  scanf("%d %d",&range1,&range2);
  
  for(i=range1;i<=range2;i++)
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
          printf("%d ",i);
      }
  }
  return 0; 
}

//8. Write a program to find next Prime number of a given number

#include <stdio.h>
int main()
{
    int i,j,n;
    printf("Enter Number");
    scanf("%d",&n);
    
    i = n + 1;
    while(i)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0){
                break;
            }
        }
        if(i==j){
            break;
        }
        i++;
    }
    
    printf("The Prime Number of %d is %d",n,j);
    return 0;
}

//9. Write a program to check whether a given number is an Armstrong number
//or not

#include <stdio.h>
int main()
{
   int i,n,temp,arm = 0,rem;
   printf("Enter Number");
   scanf("%d",&n);
   
   temp = n;
   while(temp>0)
   {
       rem = temp%10;
       arm = (rem * rem * rem) + arm;
       temp = temp/10;
   }
   
   if(arm == n)
   {
       printf("This Number is Armstrong Number");
   }
   else
   {
       printf("This Number isn't Armstrong Number");
   }
  return 0; 
}
//10. Write a program to print all Armstrong numbers under 1000

#include <stdio.h>
int main()
{
  int i,a,b,c;
  for(i=1;i<=1000;i++)
  {
      a = i%10;
      b = i%100;
      b = (b-a)/10;
      c = i/100;
      
     if((a*a*a) + (b*b*b) + (c*c*c) == i)
     {
         printf("%d ",i);
     }
  }
  return 0; 
}