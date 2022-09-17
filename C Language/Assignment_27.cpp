// Assignment = 27
// 1. Define a class Complex with appropriate instance variables and member functions.
// Define following operators in the class:
// a. +
// b. -
// c. *
// d. ==
#include <iostream>
using namespace std;
class Complex
{
  private :
    int real;
	int imag;
  public :
    Complex(int x,int y)
	{
		real = x;
		imag = y;
	}
	Complex()
	{
		real = 0;
		imag = 0;
	}
	Complex operator+(Complex C)
	{
		Complex temp;
		temp.real = real + C.real;
		temp.imag = imag + C.imag;
	    return temp;
	}
	Complex operator-(Complex C)
	{
		Complex temp;
		temp.real = real - C.real;
		temp.imag = imag - C.imag;
	    return temp;
	}
	Complex operator*(Complex C)
	{
		Complex temp;
		temp.real = real * C.real;
		temp.imag = imag * C.imag;
	    return temp;
	}
	int operator==(Complex A)
	{
       if(real==A.real&&imag==A.imag)
	   {
		 return true;
	   }
	   else
	   return false;
	}
	void Display()
	{
		cout<<real <<" + "<< imag <<"i "<<endl;
	}
};
int main()
{
    Complex C1(1,8),C2(11,8),C3;
	int res;
	C1.Display();
	C2.Display();
	C3 = C1 + C2;
	C3.Display();
	C3 = C1 - C2;
	C3.Display();
	C3 = C1 * C2;
	C3.Display();
	res = C1 == C2;
	cout<<res;


	return 0;
}
// 2. Write a C++ program to overload unary operators that is increment and decrement.
#include <iostream>
using namespace std;
class Number
{
  private :
   int num;
  public :
    Number(int x=0)
    {
      num = x;
    }
    void operator++()// Pre - Increment
    {
      ++num;
    }
    void operator ++(int)// Post - Increment
    {
      num++;
    }
    void operator--()// Pre - decrement.
    {
      --num;
    }
    void operator --(int)// Post - decrement.
    {
      num--;
    }
    void PrintNumber()
    {
      cout<<num<<endl;
    }
};
int main()
{
   Number n(4);
   ++n;
   n.PrintNumber();
   n++;
   n.PrintNumber();
   --n;
   n.PrintNumber();
   n--;
   n.PrintNumber();

   return 0;
}
// 3. Write a C++ program to add two complex numbers using operator overloaded by a
// friend function.
#include <iostream>
using namespace std;
class Complex
{
  private :
    int real;
	int imag;
  public :
  Complex(){}
   Complex(int x,int y)
   {
     real = x;
	 imag = y;
   }
   void Display()
   {
	cout<<real<<" + "<<imag<<"i"<<endl;
   }
   friend Complex operator+(Complex,Complex);
};
Complex operator+(Complex A,Complex B)
{
	Complex temp;
	temp.real = A.real + B.real;
	temp.imag = A.imag + B.imag;
	return temp;
}
int main()
{
    Complex C1(9,5),C2(3,7),C3;
	C1.Display();
	C2.Display();
    C3 = C1 + C2;
	C3.Display();

	return 0;
}
// 4. Create a class Time which contains:
// - Hours
// - Minutes
// - Seconds
// Write a C++ program using operator overloading for the following:
// 1. = = : To check whether two Times are the same or not.
// 2. >> : To accept the time.
// 3. << : To display the time.
// Output -
#include <iostream>
using namespace std;
class Time
{
 private :
  int hours;
  int min;
  int sec;
 public :
 friend istream& operator>>(istream&,Time&);
 friend ostream& operator<<(ostream&,Time&);	
 void operator==(Time A)
 {
 	if(A.hours == hours && A.min == min && A.sec == sec)
 	{
 		cout<<"Time are Same : ";
    }
    else
    cout<<"Time aren't Same : ";
 }
};
int main()
{
	Time T1,T2;
    cin>>T1;
    cout<<T1;
    cin>>T2;
    cout<<T2;
    
	T1 == T2;
	
	return 0;
}
ostream &operator<<(ostream&output,Time &A)
{
	output<<"The Time is : \n";
	output<<"Hours : "<<A.hours<<endl;
	output<<"Mintues : "<<A.min<<endl;
	output<<"Seconds : "<<A.sec<<endl;
	output<<endl;
	output<<endl;
	return output;
}
istream &operator>>(istream&input,Time &A)
{
	cout<<"Enter Time : \n";
	cout<<"-----------------\n";
	cout<<"Enter Hours : ";
	input>>A.hours;
	cout<<endl;
	cout<<"Enter Minutes : ";
	input>>A.min;
	cout<<endl;
	cout<<"Enter Seconds : ";
	input>>A.sec;
	cout<<"---------\n";
	
	return input;
}
// 5. Consider following class Numbers
// class Numbers

// {
// int x,y,z;
// public:
// // methods

// };
// Overload the operator unary minus (-) to negate the numbers.
#include <iostream>
using namespace std;
class Number 
{
   private :
   	 int a,b,c;
   public :
    Number(int x = 0 ,int y = 0,int z = 0 )
   	{
   	 	a = x;
   	 	b = y;
   	 	c = z;
    }
    Number operator-()
    {
       return Number(-a,-b,-c);
	}
	void Display()
	{
		cout<<"("<<a<<","<<b<<","<<c<<")"<<endl;
	}
};
int main()
{
	Number Num1(2,3,5),Num2(4,5,6),Num3;
	Num1.Display();
	Num2.Display();
    Num3 = -Num2;
    Num3.Display();
    Num3 = -Num1;
    Num3.Display();
	
	return 0;
}
// 6. Create a class CString to represent a string.
// a) Overload the + operator to concatenate two strings.
// b) == to compare 2 strings.
#include <iostream>
#include <string.h>
using namespace std;
class CString 
{
  private:
   char str[50];
  public :
   void Input()
   {
      cout<<"Enter String : ";
      cin.getline(str,50);
   } 
   CString operator+(CString C)
   {
      CString temp;
      strcpy(temp.str,str);
      strcat(temp.str,C.str);

      return temp;
   }
    bool operator==(CString C)
    {
      if(strcmp(str,C.str)==0)
       return true;
       else
       return false;
    } 
   void Display()
   {
      cout<<str<<endl;
   }
};
int main()
{
   CString s1,s2,s3,s4;
   s1.Input();
   s2.Input();
   s4.Input();
   s3 = s1 + s2;
   s3.Display();
   if(s1==s4)
   cout<<"String are Same : ";
   else
   cout<<"String aren't Same : ";

   return 0;
}
// 7. Define a C++ class fraction
// class fraction
// {
// long numerator;
// long denominator;
// Public:
// fraction (long n=0, long d=0);
// }
// Overload the following operators as member or friend:
// a) Unary ++ (pre and post both)
// b) Overload as friend functions: operators << and >>.
// Output-
#include <iostream>
using namespace std;
class fraction
{
  private :
  long numerator;
  long denominator;
  public :
    fraction(long n = 0,long d = 0)
    {
      numerator = n;
      denominator = d;
    }
     friend istream& operator>>(istream&,fraction&);
     friend ostream& operator<<(ostream&,fraction);
   fraction operator++()
   {
      fraction i;
      i.numerator = ++numerator;
      i.denominator = ++denominator;
      return i;
   }
   fraction operator++(int)
   {
      fraction i;
      i.numerator = numerator++;
      i.denominator = denominator++;
      return i;
   }
};
int main()
{
   fraction f1,f2;
   cout<<f1;
   cout<<f2;
   cin>>f1;
   f1++;
   cout<<f1;
   ++f1;
   cout<<f1;
   cin>>f2;
   f2 = ++f1;
   cout<<f1;
   cout<<f2;
   f2 = f1++;
   cout<<f1;
   cout<<f2;
   
   return 0;
}
ostream& operator<<(ostream&output,fraction A)
{
   output<<"Fraction "<<"     :"<<A.numerator<<"/"<<A.denominator<<endl;
   return output;
}
istream& operator>>(istream&input,fraction &A)
{
   cout<<"Enter Fraction Value :\n";
   cout<<endl;
   cout<<"Numerator : ";
   input>>A.numerator;
   cout<<"Denominator :  ";
   input>>A.denominator;
   
   return input;
}
// 8. Consider a class Matrix
// Class Matrix
// {
// int a[3][3];
// Public:
// //methods;
// };
// Overload the - (Unary) should negate the numbers stored in the object.
// Output -
#include <iostream>
using namespace std;
class Matrix
{
private:
   int a[3][3];
public:
   void SetData()
   {
      cout << "Enter Matrix Element (3 X 3) : ";
      for (int i = 0; i < 3; i++)
      {
         for (int j = 0; j < 3; j++)
         {
            cin >> a[i][j];
         }
      }
   }
   void operator-()
   {
      Matrix M;
     for(int i = 0;i<3;i++)
     {
      for(int j = 0; j<3; j++)
      {
         a[i][j] =-a[i][j];
      }
     }
   }
   void Display()
   {
      cout << "The Matrix is : \n";
      for (int i = 0; i < 3; i++)
      {
         for (int j = 0; j < 3; j++)
         {
            cout << "\t" << a[i][j];
         }
         cout << endl;
      }
   }
};
int main()
{
   Matrix M;
   M.SetData();
   -M;
   M.Display();

   return 0;
}
// 9. Consider the following class mystring
// Class mystring
// {
// char str [100];
// Public:
// // methods
// };
// Overload operator “!” to reverse the case of each alphabet in the string
// (Uppercase to Lowercase and vice versa).
// 10.Class Matrix
// {
// int a[3][3];
// Public:
// //methods;
// };
// Let m1 and m2 are two matrices. Find out m3=m1+m2 (use operator
// overloading).
