//ASSIGNMENT = 13
//1. Write a recursive function to calculate sum of first N natural numbers
#include <stdio.h>
int sum(int);
int main()
{
	int n;
	printf("Enter Number");
	scanf("%d",&n);
	
	printf("The Sum of N Nautral Number = %d",sum(n));
	
	return 0;
}
int sum(int n)
{
	int s;
	if(n==1)
	return 1;
	
	s = n + sum(n-1);
	
	return s;
}
//2. Write a recursive function to calculate sum of first N odd natural numbers
#include <stdio.h>
int odd(int);
int main()
{
    int n;
    printf("Enter Odd Number ");
    scanf("%d",&n);
    printf("%d",odd(n));
}
int odd(int num)
{
    int sum = 0;
    if(num==0)
    return num;
    
    sum = 2*num - 1 + odd(num - 1);
    
    return sum;
}
//3. Write a recursive function to calculate sum of first N odd natural numbers

#include <stdio.h>
int even(int);
int main()
{
    int n;
    printf("Enter Even Number ");
    scanf("%d",&n);
    printf("%d",even(n));
}
int even(int num)
{
    int sum = 0;
    if(num==0)
    return num;
    
     sum = 2*num + even(num - 1);;
    
    return sum;
}
//4. Write a recursive function to calculate sum of squares of first n natural numbers
#include <stdio.h>
int square(int);
int main()
{
    int n;
    printf("Enter Number ");
    scanf("%d",&n);
    printf("%d",square(n));
}
int square(int num)
{
    int sum = 0;
    if(num==1)
    return 1;
    
    sum = num * num + square(num - 1);
   
    return sum;
}
//5. Write a recursive function to calculate sum of digits of a given number
#include <stdio.h>
int fun(int);
int main()
{
    int n;
    printf("Enter the Digit");
    scanf("%d",&n);
    printf("%d",fun(n));
}
int fun(int n)
{
    int s;
    if(n==0)
    return 0;
    s = n%10 + fun(n/10);
    return s ;
}
//6. Write a recursive function to calculate factorial of a given number
#include <stdio.h>
int fact(int);
int main()
{
    int n;
    printf("Enter Number ");
    scanf("%d",&n);
    printf("%d",fact(n));
}
int fact(int num)
{
    int s;
    if(num==0||num==1)
    return 1;
    
    s = num * fact(num - 1);
    return s;
}
//7. Write a recursive function to calculate HCF of two numbers
#include <stdio.h>
int hcf(int, int);
 int main()
{
    int a, b, result;
 
    printf("Enter the two numbers  ");
    scanf("%d%d", &a, &b);
    result = hcf(a, b);
    printf("The HCF of %d and %d is %d.\n", a, b, result);
    
    return 0;
}
int hcf(int a, int b)
{
    while (a != b)
    {
        if (a > b)
        {
            return hcf(a - b, b);
        }
        else
        {
            return hcf(a, b - a);
        }
    }
    return a;
}

//8. Write a recursive function to print first N terms of Fibonacci series
#include <stdio.h>
int fibo(int);
int main()
{
    int n,i;
    printf("Enter Number");
    scanf("%d",&n);
    
    for(i=0;i<=n;i++)
    printf("%d ",fibo(i));
    
    return 0;
}
int fibo(int n)
{
    int f;
    if(n==0||n==1)
    return n;
    
    f = fibo(n - 1) + fibo(n - 2);
    
    return f;
}
//9. Write a program in C to count the digits of a given number using recursion.
#include <stdio.h>
int count = 0;
int fun(int);
int main()
{
    int n;
    printf("Enter the Digit");
    scanf("%d",&n);
    printf("%d",fun(n));
}
int fun(int n)
{
    if(n)
    {
        count++;
        fun(n/10);
    }
    else
    return count;
}
//10. Write a program in C to calculate the power of any number using recursion.
#include <stdio.h>
long power(int ,int);
int main()
{
    int base,exponent;
    long pwr;
    printf("Enter base");
    scanf("%d",&base);
    printf("Enter Exponent");
    scanf("%d",&exponent);
    
    pwr = power(base,exponent);
    
    printf("The Result is %ld",pwr);
    
    return 0;
}
long power(int a ,int b)
{
    long value;
    if(b==0)
    return 1;
    
    value = (a * power(a,b - 1));
    return value;
}