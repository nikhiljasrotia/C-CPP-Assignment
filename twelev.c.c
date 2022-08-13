//ASSIGNMENT = 12
//1. Write a recursive function to print first N natural numbers
#include <stdio.h>
void fun(int);
int main()
{
	int num;
	printf("Enter N Natural Number");
	scanf("%d",&num);
	fun(num);
	
	return 0;
}
void fun(int n)
{
	if(n==0)
	return;
	
    fun(n - 1);
    printf("%d ",n);
} 
//2. Write a recursive function to print first N natural numbers in reverse order

#include <stdio.h>
void fun(int);
int main()
{
	int num;
	printf("Enter N Natural Number");
	scanf("%d",&num);
	fun(num);
	
	return 0;
}
void fun(int n)
{
	if(n==0)
	return;
	
	printf("%d ",n);
    fun(n - 1);
} 
//3. Write a recursive function to print first N odd natural numbers

#include <stdio.h>
void Odd(int);
int main()
{
	int num;
	printf("Enter N Natural Number");
	scanf("%d",&num);
	Odd(num);
	
	return 0;
}
void Odd(int n)
{
	if(n==0)
	return;
	
    Odd(n - 1);
    printf("%d ",2*n - 1);
} 
//4. Write a recursive function to print first N odd natural numbers in reverse order
#include <stdio.h>
void Odd(int);
int main()
{
	int num;
	printf("Enter N Natural Number");
	scanf("%d",&num);
	Odd(num);
	
	return 0;
}
void Odd(int n)
{
	if(n==0)
	return;
	
	printf("%d ",2*n - 1);
    Odd(n - 1);
} 
//5. Write a recursive function to print first N even natural numbers
#include <stdio.h>
void Even(int);
int main()
{
	int num;
	printf("Enter N Natural Number");
	scanf("%d",&num);
	Even(num);
	
	return 0;
}
void Even(int n)
{
	if(n==0)
	return;
	
    Even(n - 1);
    printf("%d ",2*n);
} 
//6. Write a recursive function to print first N even natural numbers in reverse order
#include <stdio.h>
void Even(int);
int main()
{
	int num;
	printf("Enter N Natural Number");
	scanf("%d",&num);
	Even(num);
	
	return 0;
}
void Even(int n)
{
	if(n==0)
	return;
	
	printf("%d ",2*n);
    Even(n - 1);
} 
//7. Write a recursive function to print squares of first N natural numbers
#include <stdio.h>
void Square(int n);
int main()
{
	int num;
	printf("Enter N Natural Number");
	scanf("%d",&num);
	Square(num);
	
	return 0;
}
void Square(int n)
{
	if(n==0)
	return;
	
    Square(n - 1);
    printf("%d ",n*n);
} 
//8. Write a recursive function to print binary of a given decimal number
#include <stdio.h>
void bin(int);
 int rem,f = 1;
 long binery = 0;
int main()
{
    int num;
    printf("Enter Number");
    scanf("%d",&num);
    bin(num);
}
void bin(int n)
{
    if(n)
    {
        rem = n%2;
        binery = binery + rem * f;
        f = f * 10;
        bin(n/2);
    }
    else
    printf("%ld",binery);
}
//9. Write a recursive function to print octal of a given decimal number
#include <stdio.h>
void bin(int);
 int rem,f = 1;
 long binery = 0;
int main()
{
    int num;
    printf("Enter the Number");
    scanf("%d",&num);
    bin(num);
}
void bin(int n)
{
    if(n)
    {
        rem = n%8;
        binery = binery + rem * f;
        f = f * 10;
        bin(n/8);
    }
    else
    printf("%ld",binery);
}
//10. Write a recursive function to print reverse of a given number

#include <stdio.h>
void reverse(int n);
int rem,rev = 0;
int main()
{
	int num;
	printf("Enter Number");
	scanf("%d",&num);
	reverse(num);
	
	return 0;
}
void reverse(int n)
{
	if(n)
	{
		rem = n%10;
		rev = rev * 10 + rem;
		reverse(n/10);
	}
	else
	{
		printf("%d",rev);
	}
}