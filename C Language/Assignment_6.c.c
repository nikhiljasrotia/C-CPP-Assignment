//ASSIGNMENT = 6
//1. Write a program to calculate sum of first N natural numbers

#include<stdio.h>
int main()
{
  int n,i,sum = 0;
  printf("Enter the N Number");
  scanf("%d",&n);
  
  i = 1;
  do{
     sum = sum + i;
     i++;
  }while(i<=n);
  
  printf("The Sum of N Nautral Number = %d",sum);
  
  return 0;
}

//2. Write a program to calculate sum of first N even natural numbers

#include<stdio.h>
int main()
{
  int n,i,sum = 0;
  printf("Enter the N Number");
  scanf("%d",&n);
  
  i = 1;
  do{
      if(i%2==0){
      sum = sum + i;   
      }
     i++;
  }while(i<=n);
  
  printf("The Sum of Even N Nautral Number = %d",sum);
  
  return 0;
}

//3. Write a program to calculate sum of first N odd natural numbers

#include<stdio.h>
int main()
{
  int n,i,sum = 0;
  printf("Enter the N Number");
  scanf("%d",&n);
  
  i = 1;
  do{
      if(i%2==1){
      sum = sum + i;   
      }
     i++;
  }while(i<=n);
  
  printf("The Sum of ODD N Nautral Number = %d",sum);
  
  return 0;
}

//4. Write a program to calculate sum of squares of first N natural numbers
#include<stdio.h>
int main()
{
  int n,i,sum = 0;
  printf("Enter the N Number");
  scanf("%d",&n);
  
  i = 1;
  do{
     sum = sum + i*i;    
     i++;
  }while(i<=n);
  
  printf("The Sum of Square N Nautral Number = %d",sum);
  
  return 0;
}


//5. Write a program to calculate sum of cubes of first N natural numbers


#include<stdio.h>
int main()
{
  int n,i,sum = 0;
  printf("Enter the N Number");
  scanf("%d",&n);
  
  i = 1;
  do{
     sum = sum + i*i*i;    
     i++;
  }while(i<=n);
  
  printf("The Sum of Cube N Nautral Number = %d",sum);
  
  return 0;
}

//6. Write a program to calculate factorial of a number

#include<stdio.h>
int main()
{
  int n,i,fact = 1;
  printf("Enter any Number");
  scanf("%d",&n);
  
  i = 1;
  do{
      
    fact = fact * i;
    i++;
  }while(i<=n);
  
  printf("The Factorial Number is %d",fact);
  return 0;
}


//7. Write a program to count digits in a given number

#include<stdio.h>
int main()
{
   int n,i,count = 0;
   printf("Enter a Number");
   scanf("%d",&n);
   
   
   while(n>0)
   {
     n = n/10;
     count++;
   }
   
   printf("This Number has %d Digit",count);
   
   return 0;
}

//8. Write a program to check whether a given number is a Prime number or
//not


#include<stdio.h>
int main()
{
   int i,n;
   printf("Enter a Number");
   scanf("%d",&n);
   
   for(i=2;i<n;i++)
   {
       if(n%i==0)
       {
           break;
       }
   }
   
   if(i==n)
   {
       printf("This Number is Prime Number");
   }
   else
   {
       printf("This Number isn't Prime Number");
   }
   
   return 0;
}


//9. Write a program to calculate LCM of two numbers

#include <stdio.h>
int main()
 {
	int a, b, max;
	printf("Enter two positive integers: ");
	scanf("%d %d", &a, &b);
	max = (a > b) ? a : b;

	while (1) {
		if (max % a == 0 && max % b == 0) {
			printf("The LCM obtained from %d and %d is %d.", a, b, max);
			break;
		}
		max++;
	}
	
	return 0;
}



//10. Write a program to reverse a given number


#include <stdio.h>
int main()
{
  int n,rem,reverse = 0;
  printf("Enter any Number");
  scanf("%d",&n);
  
  while(n>0)
  {
      rem = n % 10;
      n = n/10;
      reverse = reverse*10 + rem;
  }
  
    printf("The Reverse Number is %d",reverse);
	
	return 0;
}
