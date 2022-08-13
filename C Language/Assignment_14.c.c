//ASSIGNMENT = 14
//1. Write a program to calculate the sum of numbers stored in an array of size 10. Take
//array values from the user.
#include <stdio.h>
int main()
{
    int i,a[10],sum = 0;
    printf("Enter any 10 Number");
    
    for(i=0;i<10;i++)
    {
     scanf("%d",&a[i]);
     sum = sum + a[i];
    }
    
    printf("The Sum of Number is %d",sum);
    
    return 0;
}
//2. Write a program to calculate the average of numbers stored in an array of size 10.
//Take array values from the user.
include <stdio.h>
int main()
{
    int i,a[10],sum = 0;
    float avg;
    printf("Enter any 10 Number");
    
    for(i=0;i<10;i++)
    {
     scanf("%d",&a[i]);
     sum = sum + a[i];
    }
    
    avg = sum/10.0;
    
    printf("The Average of Number is %f",avg);
    
    return 0;
}
//3. Write a program to calculate the sum of all even numbers and sum of all odd
//numbers, which are stored in an array of size 10. Take array values from the user.
#include <stdio.h>
int main()
{
    int i,a[10],se = 0,so = 0;
    float avg;
    printf("Enter any 10 Number");
    
    for(i=0;i<10;i++)
    {
     scanf("%d",&a[i]);
     
       if(i%2==0)
       {
           se = se + a[i];
       }
       else
       {
          so = so + a[i];  
       }
    }
    printf("The Sum of Even Number is %d\n",se);
    printf("The Sum of Odd Number is %d",so);
    
    return 0;
}
//4. Write a program to find the greatest number stored in an array of size 10. Take array
//values from the user.
#include <stdio.h>
int main()
{
    int a[10],max;
    printf("Enter Array");
    
    max = a[0];
         
    for(int i = 0; i < 10; i++)
         scanf("%d",&a[i]);
         
    for(int i = 0; i < 10; i++)
    {
         if(a[i]>max){
             max = a[i];
         }
    }
      
     printf("The Largest Element of Array is %d",max);
     
     return 0;
    
}
//5. Write a program to find the smallest number stored in an array of size 10. Take array
//values from the user.
#include <stdio.h>
int main()
{
    int a[10],max;
    printf("Enter Array");
    
    max = a[0];
         
    for(int i = 0; i < 10; i++)
         scanf("%d",&a[i]);
         
    for(int i = 0; i < 10; i++)
    {
         if(a[i]<max){
             max = a[i];
         }
    }
      
     printf("The Smallest Element of Array is %d",max);
     
     return 0;
    
}
//6. Write a program to sort elements of an array of size 10. Take array values from the
//user.
#include <stdio.h>
int main()
{
    int a[10];
    int i,j,temp;
    
    printf("Enter Array");
    for(i=0;i<10;i++)
      scanf("%d",&a[i]);

     
     
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(a[i]>a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for(i=0;i<10;i++)
     printf("%d ",a[i]);
     
     return 0;
}
//7. Write a program to find second largest in an array.Take array values from the user.
#include <stdio.h>
int main()
{
    int a[10],max1,max2;
    printf("Enter Array");
    
    max1 = max2 =  a[0];
         
    for(int i = 0; i < 10; i++)
         scanf("%d",&a[i]);
         
    for(int i = 0; i < 10; i++)
    {
         if(a[i]>max1){
             max2 = max1;
             max1 = a[i];
         }
         else if(a[i]>max2&&a[i]<max1)
         {
             max2 = a[i];
         }
    }
      
     printf("The  Second Largest Element of Array is %d",max2);
     
     return 0;
    
}
//8. Write a program to find the second smallest number in an array.Take array values
//from the user.
#include <stdio.h>
int main()
{
    int a[10],min1,min2;
    printf("Enter Array");
    
    min1 = min2 =  a[0];
         
    for(int i = 0; i < 10; i++)
         scanf("%d",&a[i]);
         
    for(int i = 0; i < 10; i++)
    {
         if(a[i]<min1){
             min2 = min1;
             min1 = a[i];
         }
         else if(a[i]<min2&&a[i]>min1)
         {
             min2 = a[i];
         }
    }
      
     printf("The  Second Smallest Element of Array is %d",min2);
     
     return 0;
    
}
//9. Write a program in C to read n number of values in an array and display it in reverse
//order. Take array values from the user.
#include <stdio.h>
int main()
{
    int a[10],i;
    printf("Enter Array");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=9;i>=0;i--)
    {
        printf("Reverse Array = %d\n",a[i]);
    }
    
    return 0;
}
//10. Write a program in C to copy the elements of one array into another array.Take array
//values from the user.
#include <stdio.h>
int main()
{
    int a[10],b[10],i;
    printf("Enter Array");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        b[i] = a[i];
    }
    
    for(i=0;i<10;i++)
    {
        printf("Copy Array = %d\n",b[i]);
    }
    
    return 0;
}