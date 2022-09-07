// ASSIGNMENT = 24
// 1. Define a function to check whether a given number is a Prime number or not.
#include <iostream>
using namespace std;
int PrimeNumber(int);
int main()
{
   int num;
   cout << "Enter Number :";
   cin >> num;

   if (PrimeNumber(num))
      cout << num << " : Prime Number ";
   else
      cout << num << " : Not a Prime Number";

   return 0;
}
int PrimeNumber(int n)
{
   int i;
   for (i = 2; i < n; i++)
   {
      if (n % i == 0)
         break;
   }
   if (i == n)
      return 1;
   else
      return 0;
}
// 2. Define a function to find the highest value digit in a given number.
#include <iostream>
using namespace std;
int fun(int);
int main()
{
   int num ,res;
   cout<<"Enter Number : ";
   cin>>num;
   res = fun(num);

   cout<<"The Largest Digit in "<<num<<" is "<<res;
   return 0;
}
int fun(int n)
{
  int max = 0;
  while(n!=0)
  {
    if(max<n%10)
    {
      max = n%10;
    }
    n = n/10;
  }
  return max;
}
// 3. Define a function to calculate x raised to the power y.
#include <iostream>
using namespace std;
long pow(int,int);
int main()
{
   int base,exponent;
   long power = 0;
   cout<<"Enter Number ";
   cin>>base;
   cout<<"Enter Power ";
   cin>>exponent;
   power = pow(base,exponent);
   cout<<"The Power of "<<base <<" is "<<power;

   return 0;
}
long pow(int a,int b)
{
    int value = 1;
    while(b!=0)
    {
      value = value * a;
      b--;
    }
    return value;
}
// 4. Define a function to print Pascal Triangle up to N lines.
#include <iostream>
using namespace std;
int fact(int);
int combination(int,int);
void pascal(int);
int main()
{
  pascal(5);
  return 0;
}
void pascal(int n)
{
  int i,j,k;
  for(i=0;i<=n;i++)
  {
    for(k=i;k<=n-1;k++)
    {
      cout<<" ";
    }
    for(j=0;j<=i;j++)
    {
      cout<<" "<<combination(i,j);
    }
    cout<<endl;
  }
  
}
int combination(int n,int r)
{
  int c;
  c = fact(n)/(fact(r)*fact(n-r));
  return c;
}
int fact(int n)
{
   int i,fact = 1;
   i = 1;
   while(i<=n)
   {
    fact = fact * i;
    i++;
   }
   return fact;
}
// 5. Define a function to check whether a given number is a term in a Fibonacci series or
// not.
#include <iostream>
using namespace std;
int Tocheck(int);
int main()
{
  int num;
  cout<<"Enter Number : ";
  cin>>num;
  
  if(Tocheck(num))
  cout<<"Fibonacci Series Number :";
  else
  cout<<"Not a Fibonacci Series Number : ";

  return 0;
}
int Tocheck(int n)
{
  int i,a,b,c;
  a = 0;
  b = 1;
  if(n==a||n==b)
  return 1;
  else{
    c = a + b;
    while(c<n)
    {
      c = a + b;
      a = b;
      b = c;
    }
    if(c == n)
    return 1;
    else
    return 0;
  }
}
// 6. Define a function to swap data of two int variables using call by reference
#include <iostream>
using namespace std;
void swap(int &,int&);
int main()
{
   int a,b;
   cout<<"Enter A Value :"<<endl;
   cin>>a;
   cout<<"Enter B Value :"<<endl;
   cin>>b;
   
   cout<<"Before Swapping"<<endl;
   cout<<"a = "<<a<<endl<<"b = "<<b <<endl;
   cout<<"After Swapping"<<endl;
   swap(a,b);
   cout<<"a = "<<a<<endl<<"b = "<<b;

   return 0;
}
void swap(int &m,int &n)
{
   int temp;
   temp = m;
   m = n;
   n = temp;
}
// 7. Write a function using the default argument that is able to add 2 or 3 numbers.
#include <iostream>
using namespace std;
int add(int,int,int = 0);
int main()
{
  int num1,num2,num3;
  num1 = 34;
  num2 = 55;
  num3 = 345;
  cout<<"The Sum of Two Number = "<<add(num1,num2)<<endl;
  cout<<"The Sum of Three Number = "<<add(num1,num2,num3);

  return 0;
}
int add(int x,int y,int z)
{
   int sum;
   sum = x + y + z;
   return sum;
}
// 8. Define overloaded functions to calculate area of circle, area of rectangle and area of
// triangle
#include <iostream>
using namespace std;
float area(int);
int area(int ,int);
float area(float,int);
int main()
{
  int radius;
  cout<<"Enter Radius of Circle : ";
  cin>>radius;
  cout<<"The Area of Circle = "<<area(radius)<<endl;

  int length,breadth;
  cout<<"Enter Length and breadth of Rectangle :";
  cin>>length>>breadth;
  cout<<"The Area of Rectangle = "<<area(length,breadth)<<endl;

  int base,height;
  cout<<"Enter Base and Height of Triangle :";
  cin>>base>>height;
  cout<<"The Area of Triangle = "<<area(base,height)<<endl;

  return 0;
}
float area(int r)
{
   float area;
   area = 3.14 * r * r;
   return area;
}
int area(int l,int b)
{
  int area;
  area = l * b;
  return area;
}
float area(float b,int h)
{
   float area;
   area = 0.5 * b * h;
   return area;
}
// 9. Write functions using function overloading to find a maximum of two numbers and
// both the numbers can be integer or real.
// 10. Write functions using function overloading to add two numbers having different data
// types.