// // Assignment = 25
// 1. Define a class Complex to represent a complex number. Declare instance member
// variables to store real and imaginary part of a complex number, also define instance
// member functions to set values of complex number and print values of complex
// number
using namespace std;
class Complex
{
  private:
   int real;
   int imag;
  public:
  void SetData(int x,int y)
  {
	real = x;
	imag = y;
  }
  void Display()
  {
	cout<<""<<real<<" + "<<imag<<"i"<<endl;
  }
};
int main()
{
	Complex c1,c2;
	c1.SetData(12,45);
	c2.SetData(2,3);
	c1.Display();
	c2.Display();
	
	return 0;
}
// 2. Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate
// number of instance member variables and also define instance member functions to
// set values for time and display values of time.
#include <iostream>
using namespace std;
class Time
{
  private:
  int hrs;
  int min;
  int sec;
  public :
  void Set(int x,int y,int z)
  {
  	hrs = x;
  	min = y;
  	sec = z;
  }	
  void Display()
  {
  	cout<<hrs<<" hrs "<<min<<" min "<<sec<<" sec ";
  }
};
int main()
{
	Time t1;
	t1.Set(4,5,12);
	t1.Display();
	
	return 0;
}
// 3. Define a class Factorial and define an instance member function to find the Factorial
// of a number using class.
#include <iostream>
using namespace std;
class Factorial
{
  private :
  int n,fact;
  public :
  void Set(int x)
  {
  	n = x;
  }	
  int Get()
  {
  	return n;
  }
  int GetFactorial()
  {
  	return fact;
  }
  void CalculateFactorial()
  {
  	int i,f = 1;
  	if(n<=0)
  	{
  	  fact = 1;
	  return ;	
	}
	for(i=1;i<=n;i++)
	{
		f = f * i;
	}
	fact = f;
  }
  void display()
  {
  	cout<<"Factorial of "<<Get()<<" is "<<GetFactorial();
  }
};
int main()
{
	Factorial F;
	F.Set(4);
	F.CalculateFactorial();
	F.display();
	
	return 0;
}
// 4. Define a class LargestNumber and define an instance member function to find the
// Largest of three Numbers using the class.
#include <iostream>
using namespace std;
class LargestNumber
{
 private :
 int a,b,res;
 public :
 	void Set(int x,int y)
 	{
 	  a = x;
	  b = y;	
	}
	int GetResult()
	{
		return res;
	}
	void Calculate()
	{
		res = (a>b)?a:b;
	}
	int GetA()
	{
		return a;
	}
	int GetB()
	{
		return b;
	}
 	
};
int main()
{
	LargestNumber num;
	num.Set(15,7);
	num.Calculate();
	cout<<"The Largest Number of "<<num.GetA()<<" and "<<num.GetB()<<" is "<<num.GetResult();
	
	return 0;
}
// 5. Define a class ReverseNumber and define an instance member function to find
// Reverse of a Number using class.
#include <iostream>
using namespace std;
class ReverseNumber
{
 private :
 int num,res;
 public :
 	void Set(int);
 	void Calculate();
 	int GetNumber();
 	int GetResult();
 	
};
int main()
{
	ReverseNumber Num;
	Num.Set(123);
	Num.Calculate();
	cout<<"The Reverse of "<<Num.GetNumber()<<" is "<<Num.GetResult();
	
	return 0;
}
int ReverseNumber :: GetResult()
{
	return res;
}
int ReverseNumber :: GetNumber()
{
	return num;
}
void ReverseNumber :: Calculate()
{
	int i,temp,rem,rev = 0;
	temp = num;
	while(temp!=0)
	{
	  rem = temp%10;
	  rev = rev * 10 + rem;
	  temp = temp/10;	
    }  
    res = rev;
}
void ReverseNumber :: Set(int x)
{
	num = x;
}
// 6. Define a class Square to find the square of a number and write a C++ program to
// Count number of times a function is called.
#include <iostream>
using namespace std;
class Square
{
	private :
     	int n,res;
    	static int count;
	public :
		void Set(int);
		void Calculate();
		void Display();	
		int GetCount();	
};
int Square :: count = 0;
int main()
{
	Square num,num1;
	num.Set(5);
	num.Calculate();
	num.Display();
	
	num1.Set(6);
	num1.Calculate();
	num1.Display();
	
	return 0;
}
void Square :: Display()
{
	cout<<"The Square of "<<n<<" is "<<res<<endl;
	cout<<"The Square Fuction Called "<<GetCount()<<" Times"<<endl;
}
int Square :: GetCount()
{
	return count;
}
void Square :: Calculate()
{
	res = n * n;
    count++;
}
void Square :: Set(int x)
{
	n = x;
}
// 7. Define a class Greatest and define instance member function to find Largest among
// 3 numbers using classes.
#include <iostream>
using namespace std;
class GreatestNumber
{
	private :
     	int a,b,c,res;
	public :
		void Set(int,int,int);
		void Calculate();
		void Display();		
};
int main()
{
    GreatestNumber num;
    num.Set(3,4,5);
    num.Calculate();
    num.Display();
    
	return 0;
}
void GreatestNumber :: Display()
{
	cout<<"The Greates Number of Between "<<a<<","<<b<<","<<c<<" is "<<res<<endl;
}
void GreatestNumber :: Calculate()
{
   if(a>b)
   {
   	if(a>c)
   	{
   	  res = a;	
	}
	else
	 res = c;
   }
   else
   {
   	if(b>c)
   	{
   	 res = b;	
	}
	else
	res = c;
   }
}
void GreatestNumber :: Set(int x,int y ,int z)
{
	a = x;
	b = y;
	c = z;
}
// 8. Define a class Rectangle and define an instance member function to find the area of
// the rectangle.
#include <iostream>
using namespace std;
class Rectangle
{
  private:
  int length,breadth,area;
  public :
  void Set(int x,int y)
  {
  	length = x;
  	breadth = y;
  }
  void Result()
  {
  	area = length * breadth;
  }
  void display()
  {
  	cout<<"The Area of Rectangle is "<<area<<endl;
  }
	
};
int main()
{
   Rectangle r1;
   r1.Set(12,31);
   r1.Result();
   r1.display();
	
	return 0;
}
// 9. Define a class Circle and define an instance member function to find the area of the
// circle.
#include <iostream>
using namespace std;
class Circle
{
  private:
  int radius;
  float res;
  
  public :
  void Set(int r)
  {
  	radius = r;
  }
  void Result()
  {
  	res = 3.14 * radius * radius;
  }
  void display()
  {
  	cout<<"The Area of Circle is "<<res<<endl;
  }
	
};
int main()
{
	Circle r1;
	r1.Set(8);
	r1.Result();
	r1.display();
	
	return 0;
}
// 10. Define a class Area and define instance member functions to find the area of the
// different shapes like square, rectangle , circle etc.
#include <iostream>
using namespace std;
class Area
{
  private :
  int radius;
  float Area_of_Circle;
  int length, breadth;
  int Area_of_Rectangle;
  int side;
  int Area_of_Square;
  
  public:
  void SetInput();
  void Calculate();
  void Display();
};
int main()
{
	Area A;
	A.SetInput();
	A.Calculate();
	A.Display();
	
	return 0;
}
void Area :: Display()
{
	cout<<"\nArea of Circle is "<<Area_of_Circle<<endl;
	cout<<"Area of Rectangle is "<<Area_of_Rectangle<<endl;
	cout<<"Area of Square is "<<Area_of_Square<<endl;
}
void Area :: Calculate()
{
	int aor,aos;
	float aoc;
	aoc = 3.14*radius*radius;
	aor = length * length;
	aos = side * side;
	Area_of_Circle = aoc;
	Area_of_Rectangle = aor;
	Area_of_Square = aos;
}
void Area :: SetInput()
{
	cout<<"\nEnter Radius of Circle :";
	cin>>radius;
	cout<<"Enter Lenght and Breadth of Rectangle :";
	cin>>length>>breadth;
	cout<<"Enter Side of Square : ";
	cin>>side;
}
