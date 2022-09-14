// Assignment  = 26
// Define a class Complex to represent a complex number with instance variables a and
// b to store real and imaginary parts. Also define following member functions
// a. void setData(int,int)
// b. void showData()
// c. Complex add(Complex)
#include <iostream>
using namespace std;
class Complex
{
private:
	int real;
	int imag;

public:
	void SetData(int x, int y)
	{
		real = x;
		imag = y;
	}
	void ShowData()
	{
		cout << real << " + " << imag << " i "<<endl;
	}
//   Complex add(Complex C)
//	{
//		Complex temp;
//		temp.real = real+C.real; 
//        temp.imag = imag+C.imag;
//		return temp;
	}
	Complex add(Complex O,Complex P)
	{
		Complex Z;
		Z.real = O.real + P.real;
		Z.imag = O.imag + Z.imag;
		return Complex Z;
	}
};
int main()
{
	Complex C1, C2, C3;
	C1.SetData(3, 5);
	C1.ShowData();
	C2.SetData(4, 6);
	C2.ShowData();
	C3= C1.add(C2);
	C3.ShowData();

	return 0;
}
// 2. Define a class Time to represent a time with instance variables h,m and s to store
// hour, minute and second. Also define following member functions
// a. void setTime(int,int,int)
// b. void showTime()
// c. void normalize()
// d. Time add(Time)
#include <iostream>
using namespace std;
class Time
{
 private:
   int h,m,s;
 public :
  void SetTime(int x,int y,int z)
  {
	h = x;
	m = y;
	s = z;
  }
  void ShowTime()
  {
	cout<<h<<":"<<m<<":"<<s<<""<<endl;
  }
  void Normalized()
  {
	m = m + s/60;
	s = s%60;
	h = h + m/60;
	m = m % 60;
  }
  Time add(Time T)
  {
    Time temp;
	temp.h = h + T.h;
	temp.m = m + T.m;
	temp.s = s + T.s;

	return temp;
  }
};
int main()
{
	Time t1,t2,t3;
	t1.SetTime(5,125,130);
	t1.ShowTime();
	t2.SetTime(44,21,244);
	t2.ShowTime();
	t3 = t1.add(t2);
	t3.ShowTime();
	t3.Normalized();
	t3.ShowTime();
	
	return 0;
}
// 3. Define a class Cube and calculate Volume of Cube and initialise it using constructor.
#include <iostream>
using namespace std;
class Cube
{
 private :
  int number,result;
  public :
    Cube(int x)
	{
     number = x;		
	}
	int Get()
	{
		return number;
	}
	void CalulateVolume()
	{
		result = number * number * number;
	}
	int GetRes()
	{
		return result;
	}
	void Display()
	{
      cout<<"The Volume of "<<Get()<<" is "<<GetRes()<<endl;		
	}	
};
int main()
{
	Cube c(4),a(6);
	c.CalulateVolume();
    c.Display();
    a.CalulateVolume();
    a.Display();
    
	return 0;
}
// 4. Define a class Counter and Write a program to Show Counter using Constructor.
#include <iostream>
using namespace std;
class Counter
{
 private:
    int result;
    static int count;
 public :
    Counter()
	{ 
	  result = 1 + count++ ;
	  cout<<result<<endl;;
	}
};
int Counter :: count;
int main()
{
	Counter c1,c2,c3;
	
	return 0;
}
// 5. Define a class Date and write a program to Display Dateand initialise date object
// using Constructors.
#include <iostream>
#include <stdlib.h>
using namespace std;
class Date
{
private:
	int day,month, year;

public:
	Date(int x,int y,int z)
	{
		day = x;
		month = y;
		year = z;
	}
	void Display()
	{
		cout << day << "-" << month << "-" << year << endl;
	}
};
int main()
{
	Date D1(31,12,2022);
	D1.Display();

	return 0;
}
// 6. Define a class student and write a program to enter student details using constructor
// and define member function to display all the details.
#include <iostream>
using namespace std;
class Student
{
    private :
	 int rollno;
	 char name[20];
	 int marks;
	 float per;
	 public:
	  Student()
	  {
		 cout<<"\nEnter Rollno of Student : ";
		 cin>>rollno;
		 cout<<"Enter Student Name : ";
		 cin.ignore();
		 cin.getline( name, 20 );
		 cout<<"Enter Student Marks : ";
		 cin>>marks;
		 cout<<"Enter Student Percentage  : ";
		 cin>>per;
	  }
	  void Display()
	  {
		cout<<"\nStudent Roll No  : "<<rollno<<endl;
		cout<<"Student Name  : "<<name<<endl;
		cout<<"Student Total Marks : "<<marks<<endl;
		cout<<"Student Percentage : "<<per;
	  }
};
int main()
{
	Student s1;
	 s1.Display();
	
	return 0;
}
// 7. Define a class Box and write a program to enter length, breadth and height and
// initialise objects using constructor also define member functions to calculate volume
// of the box.
#include <iostream>
using namespace std;
class Box
{
  private :
    int length,breadth,height;
	int res;
  public :
    Box(int x,int y,int z)
	{
		length = x;
		breadth = y;
		height = z;
	}
	int GetResult()
	{
		return res;
	}
	void CalculateVolumeofCuboid()
	{
		res = length * breadth * height ;
	}	
};
int main()
{
	Box B(21,9,8);
	B.CalculateVolumeofCuboid();
	cout<<"The Volume of Box is : "<<B.GetResult();
	
	return 0;
}
// 8. Define a class Bank and define member functions to read principal , rate of interest
// and year. Another member functions to calculate simple interest and display it.
// Initialise all details using constructor.
#include <iostream>
using namespace std;
class Bank
{
  private :
    int principal,time;
    float rate;
    float simpleInterst;
  public :
    Bank();
	void CalculateSimpleInterest();	
	float GetSI();
	void displaY();
};
int main()
{
	Bank B1;
	B1.CalculateSimpleInterest();
	B1.displaY();
	
    return 0;
}
void Bank :: displaY()
{
	cout<<"The SimpleInterest of "<<principal<<","<<rate<<" and "
	<<time<<" is "<<GetSI()<<endl;
}
float Bank :: GetSI()
{
	return simpleInterst;
}
void Bank :: CalculateSimpleInterest()
{
	simpleInterst = principal * rate * time/100;
}
Bank :: Bank()
{
	cout<<"Enter the Amount of Principal : ";
	cin>>principal;
	cout<<"Enter the Amount of Rate : ";
	cin>>rate;
	cout<<"Enter the Time : ";
	cin>>time;
}
// 9. Define a class Bill and define its member function get() to take detail of customer ,
// calculateBill() function to calculate electricity bill using below tariff :
// Upto 100 unit RS. 1.20 per unit
// From 100 to 200 unit RS. 2 per unit
// Above 200 units RS. 3 per unit.
#include <iostream>
#include <string.h>
using namespace std;
class Bill
{
  private :
    int House_no;
    int unit;
	char name[20];
	float amount;
  public :
    Bill();
    void CalculateBill();	
};
int main()
{
	Bill b1;
	b1.CalculateBill();
	return 0;
}
void Bill :: CalculateBill()
{
	if(unit<=100)
	{
		amount = 1.20 * unit;
		cout<<"--------------------------------Electricity Bill -----------------------------"<<endl;
		cout << "Name: " << name <<endl<<"House no: " << House_no <<endl <<"Amount: " << amount << endl;
	}
	else if(unit>100 && unit<=200)
	{
		amount = 2.00 * unit;
		cout<<"--------------------------------Electricity Bill -----------------------------"<<endl;
		cout << "Name: " << name<<endl<<"House no: " << House_no <<endl <<"Amount: " << amount << endl;
	}
	else
	{
		amount = 3.00 * unit;
		cout<<"--------------------------------Electricity Bill -----------------------------"<<endl;
		cout << "Name: " << name <<endl<<"House no: " << House_no <<endl <<"Amount: " << amount << endl;
	}
}
Bill :: Bill()
{
  cout<<"\nEnter the House Number : ";
  cin>>House_no;
  cout<<"Enter House Owner Name : ";
  cin.ignore();
  cin.getline( name, 20 );
  cout<<"Enter the Unit of the Bill : ";
  cin>>unit;
}
// 10. Define a class StaticCount and create a static variable. Increment this variable in a
// function and call this 3 times and display the result.
#include <iostream>
using namespace std;
class StaticCount
{
  private :
    static int count;
  public :
    void Fun()
	{
		count++;
		cout<<count<<endl;
	}	
};
int StaticCount :: count;
int main()
{
	StaticCount var;
	var.Fun();
	var.Fun();
	var.Fun();
	
	return 0;
}
