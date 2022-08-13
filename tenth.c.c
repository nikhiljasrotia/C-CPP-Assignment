//ASSIGNMENT = 10
//1. Write a function to calculate the area of a circle. (TSRS)

#include <stdio.h>
float Circle(float area);
int main()
{
    float x,c;
    printf("Enter Radius");
    scanf("%f",&x);
    
    c = Circle(x);
    
    printf("The Circle Area is %f",c);
    
    return 0;
}
float Circle(float r)
{
    float area;
    area = 3.14*r*r;
    return area;
}

//2. Write a function to calculate simple interest. (TSRS)
#include <stdio.h>
int SimpleInterest(int a,int b , int c);
int main()
{
    int p,n,r;
    float k;
    printf("Enter Principle,rate and time");
    scanf("%d %d %d",&p,&n,&r);
  
    k = SimpleInterest(p,n,r);
    
    printf("The SimpleInterest is %2f",k);
    
    return 0;  
    
}
int SimpleInterest(int a,int b , int c)
{
    float si;
    si = a*b*c/100;
    return si;
   
}
//3. Write a function to check whether a given number is even or odd. Return 1 if the
//number is even, otherwise return 0. (TSRS)

#include <stdio.h>
int OddorEven(int num);
int main()
{
    int nn,k;
    printf("Enter Number");
    scanf("%d",&nn);
    
    printf("%d", OddorEven(nn));
 
}
int OddorEven(int num)
{
    if(num%2==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
//4. Write a function to print first N natural numbers (TSRN)

#include <stdio.h>
void NautralNumber(int num);
int main()
{
   int n;
   printf("Enter Number");
   scanf("%d",&n);
   
   NautralNumber(n);
    return 0;
}
void NautralNumber(int num)
{
    int i;
    for(i=1;i<=num;i++)
    {
        printf("%d ",i);
    }
}
//5. Write a function to print first N odd natural numbers. (TSRN)
#include <stdio.h>
void OddNumber(int num);
int main()
{
   int n;
   printf("Enter Number");
   scanf("%d",&n);
   
   OddNumber(n);
    return 0;
}
void OddNumber(int num)
{
    int i;
    for(i=1;i<=num;i++)
    {
        if(i%2==1)
        {
        printf("%d ",i);
        }
    }
}
//6. Write a function to calculate the factorial of a number. (TSRS)
#include <stdio.h>
int factNumber(int num);
int main()
{
   int n,k;
   printf("Enter Number");
   scanf("%d",&n);
   
   k = factNumber(n);
   
   printf("%d",k);
    return 0;
}
int factNumber(int num)
{
    int i,fact = 1;
    for(i=1;i<=num;i++)
    {
        fact = fact * i;
    }
    
    return fact;
}
//7. Write a function to calculate the number of combinations one can make from n items
//and r selected at a time. (TSRS)
#include <stdio.h>
long fact(int);
long combination(int,int);
int main()
{
    int n,r;
    printf("Enter N and R Value");
    scanf("%d %d",&n,&r);
    
    printf("The combination is %ld",combination(n,r));
    
    return 0;
}
long fact(int n)
{
    int f = 1,i;
    i = 1;
    while(i<=n)
    {
        f = f * i;
        i++;
    }
    return f;
}
long combination(int n,int r)
{
    int c ;
    c = fact(n)/(fact(r) * fact(n-r));
    return c;
}
//8. Write a function to calculate the number of arrangements one can make from n items
//and r selected at a time. (TSRS)
#include <stdio.h>
long fact(int);
long permutation(int,int);
int main()
{
    int n,r;
    printf("Enter N and R Value");
    scanf("%d %d",&n,&r);
    
    printf("The Arrangement is %ld",permutation(n,r));
    
    return 0;
}
long fact(int n)
{
    int f = 1,i;
    i = 1;
    while(i<=n)
    {
        f = f * i;
        i++;
    }
    return f;
}
long permutation(int n,int r)
{
    int c ;
    c = fact(n)/(fact(n-r));
    return c;
}
//9. Write a function to check whether a given number contains a given digit or not.
//(TSRS)
#include <stdio.h>
int fun(int ,int);
int main()
{
    int num,digit;
    printf("Enter Number");
    scanf("%d",&num);
    printf("Enter Digit in Number");
    scanf("%d",&digit);
    
    printf("%d",fun(num,digit));
    
    return 0;
}
int fun(int n,int d)
{
    int rem;
    while(n>0)
    {
        rem = n%10;
        if(rem == d)
         return 1;
         
        n = n/10;
    }
    return 0;
}

//10. Write a function to print all prime factors of a given number. For example, if the
//number is 36 then your result should be 2, 2, 3, 3. (TSRN)

#include <stdio.h>
void primefactor(int);
int main()
{
    int n = 36;
    primefactor(n);
    
}
void primefactor(int num)
{
    int i;
    for(i=2;num!=1;i++)
    {
        while(num%i==0)
        {
            num = num/i;
            printf("%d,",i);
        }
    }
}