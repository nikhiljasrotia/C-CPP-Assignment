//Assignment = 28
//1. Define a class Complex with appropriate instance variables and member functions.
//Overload following operators
//a. << insertion operator
//b. >> extraction operator
#include <iostream>
using namespace std;
class Complex
{
  private :
   int real;
   int imag;
  public :
   friend istream& operator>>(istream&,Complex&);
   friend ostream& operator<<(ostream&,Complex);
};
int main()
{
	Complex C1;
	cin>>C1;
	cout<<C1;

	return 0;
}
istream& operator>>(istream&input,Complex &A)
{
	cout<<"Enter Complex Number \n";
	cout<<"-----------------------\n";
	cout<<"Enter Real Parts of Complex Number : ";
	input>>A.real;
	cout<<"Enter Imaginery Parts of Complex Number : ";
	input>>A.imag;
	return input;
}
ostream& operator<<(ostream&output,Complex A)
{
	output<<A.real<<" + "<<A.imag<<"i"<<endl;
	return output;
}
//2. Define a class Complex with appropriate instance variables and member functions.
//One of the functions should be setData() to set the properties of the object. Make
//sure the names of formal arguments are the same as names of instance variables.
#include <iostream>
using namespace std;
class Complex
{
  private :
   int real;
   int imag;
  public :
    void SetData(int real,int imag)
	{
		this->real = real;
      this->imag = imag;
	}
	void display()
	{
		cout<<real<<" + "<<imag<<"i"<<endl;
	}
};
int main()
{
	Complex C1;
	C1.SetData(3,4);
	C1.display();

	return 0;
}

//3. Overload subscript operator [] that will be useful when we want to check for an index
//out of bound.
#include <iostream>
using namespace std;
class Array
{
private :
    int arr[10];
    const int size = 100;
public :
     Array()
     {

     }
     Array(int n,int index)
     {
         arr[index] = n;
     }
     int operator[](int index)
     {
         if(index > size)
         {
             cout<<"Array Index Out of Bound Exception :";
             exit(0);
         }
         return arr[index];
     }
     void Display(int index )
     {
         cout<<arr[index]<<endl;
     }
};
int main()
{
    Array a(5,10);
    a.Display(10);
    cout<<a[101];

    return 0;
}

//4. Create a student class and overload new and delete operators as a member function
//of the class.
#include <iostream>
#include <cstring>
using namespace std;
class Student
{
private:
    char name[20];
    int age;
public:
    Student()
    {
        cout<<"Default Constructor:";
    }
    Student(char *str,int age)
    {
        strcpy(name,str);
        this->age = age;
    }
    void *operator new(size_t size)
    {
        void *ptr;
        cout<<"Size of Variable is "<<size<<endl;
        ptr = malloc(size);
        if(ptr!=NULL)
            return ptr;
        else
            cout<<"Null Pointer Exception";
    }
    void operator delete(void *ptr)
    {
        cout<<"Delete Overload()"<<endl;
        free(ptr);
    }
    void WhoAreYou()
    {
        cout<<"My Name is "<<name<<endl;
        cout<<"My Age is "<<age<<endl;
    }
};
int main()
{
    Student *s1 = new Student("Nikhil",22);

    s1->WhoAreYou();

    delete s1;
    return 0 ;
}

//5. Create a student class and overload new and delete operators outside the class.
//6. Create a complex class and overload assignment operator for that class.
#include <iostream>
#include <cstring>
using namespace std;
class Student 
{
  private:
  char name[20];
  int age;
  public:
  Student()
  {
    cout<<"Default Constructor:\n";
  }
  Student(const char *str,int age)
  {
    cout<<"Parameterized Constructor:\n";
    strcpy(name,str);
    this->age = age;
  }
  void WhoAreYou()
  {
    cout<<"My Name is "<<name<<endl;
    cout<<"My Age is "<<age<<endl;
  }

};
void *operator new(size_t size)
{
    void *ptr;
    cout<<"Size of Variable is :"<<size<<endl;
    ptr = malloc(size);
    if(ptr!=NULL)
      return ptr;
    else
      cout<<"NULL Pointer Exception :";
}
void operator delete(void *ptr)
{
    cout<<"Delete Operator()\n";
    free(ptr);
}
int main()
{
    Student *s1 = new Student("Nikhil",22);

    s1->WhoAreYou();
    
    delete s1;

    return 0;
}
#include <iostream>
using namespace std;
class Complex
{
 private :
  int *real;
  int *imag;
  public :
   Complex()
   {
      cout<<"Default Constructor :\n";
      real = (int*)malloc(sizeof(int));
      imag = (int*)malloc(sizeof(int));
   }
   Complex(const Complex &C)
   {
       cout<<"Copy Constructor :\n";
       real = (int*)malloc(sizeof(int));
       imag = (int*)malloc(sizeof(int));
       *real = *(C.real);
       *imag = *(C.imag);
   }
   Complex operator=(const Complex &C)
   {
      cout<<"Assignment Operator :\n";
      if(real == C.real)
      {
         if(imag == C.real)
         {
            return *this;
         }
      }
      free(real);
      free(imag);
      real = (int*)malloc(sizeof(int));
      imag = (int*)malloc(sizeof(int));
      *real = *(C.real);
      *imag = *(C.imag);

      return *this;
   }
   ~Complex()
   {
      cout<<"Destructor :\n";
      free(real);
      free(imag);
   }
   void SetData(int x,int y)
   {
      *real = x;
      *imag = y;
   }
   void Change(int x,int y)
   {
      free(real);
      free(imag);
      *real = x;
      *imag = y;
   }
   void Display()
   {
      cout<<*real<<" + "<<*imag<<"i"<<endl;
   }
};
int main()
{
  Complex C1;
  C1.SetData(3,4);
  Complex C2 = C1;
  Complex C3;
  C3 = C1;
  C1.Change(8,9);
  C1.Display();
  C2.Display();
  C3.Display();

   return 0;
}
//7. Create an Integer class and overload logical not operator for that class.
#include <iostream>
using namespace std;
class Number
{
private :
    int num;
public :
    Number(int x = 0)
    {
        num = x;
    }
    void operator!()
    {
       num = !num;
    }
    void Display()
    {
        cout<<num<<endl;
    }
};
int main()
{
    Number n(34);
    !n;
    n.Display();

    return 0;
}
//8. Create a Coordinate class for 3 variables x,y and z and overload comma operator
//such that when you write c3 = (c1 , c2 ) then c2 is assigned to c3. Where c1,c2,and
//c3 are objects of 3D coordinate class.
#include <iostream>
using namespace std;
class Coordinate
{
private:
    int x,y,z;
public:
    void setdata(int a,int b ,int c)
    {
        x = a;
        y = b;
        z = c;
    }
    void Display()
    {
        cout<<"("<<x<<","<<y<<","<<z<<")"<<endl;
    }
    Coordinate operator,(Coordinate C)
    {
        Coordinate temp;
        temp.x = C.z;
        temp.y = C.y;
        temp.z = C.x;
        return temp;
    }
};
int main()
{
    Coordinate C1,C2,C3;
    C1.setdata(2,4,9);
    C2.setdata(4,5,7);

    C3 = (C1,C2);
    C3.Display();

    return 0;
}
//9. Create an Integer class that contains int x as an instance variable and overload
//casting int() operator that will type cast your Integer class object to int data type.
#include <iostream>
using namespace std;
class Integer
{
private:
    int x;
public:
    Integer()
    {
        x = 0;
    }
    Integer(int value)
    {
        x = value;
    }
    operator int()
    {
        return x;
    }
    void Display()
    {
        cout<<x<<endl;
    }
};
int main()
{
   Integer x = 12;
   int n;
   n = x;

   cout<<n<<endl;

    return 0;
}
//10. Create a Distance class having 2 instance variable feet and inches. Also create
//default constructor and parameterized constructor takes 2 variables . Now overload ()
//function call operator that takes 3 arguments a , b and c and set feet = a + c + 5 and
//inches = a+b + 15.
#include <iostream>
using namespace std;
class Distance
{
private :
    int feet;
    int inches;
public:
    Distance()
    {

    }
    Distance(int x,int y)
    {
        feet = x;
        inches = y;
    }
    Distance operator()(int a,int b,int c)
    {
        Distance temp;
        temp.feet = a +c + 5;
        temp.inches = a + b + 15;
        return temp;
    }
    void Display()
    {
        cout<<"Feet = "<<feet<<" Inches = "<<inches<<endl;
    }
};
int main()
{
    Distance d1(10,20),d2,d3;
    d2 = d1(10,20,30);
    d3 = d3(10,15,32);
    d1.Display();
    d2.Display();
    d3.Display();

    return 0;
}
//11. Create a class Marks that have one member variable marks and one member
//function that will print marks. We know that we can access member functions using
//(.) dot operator. Now you need to overload (->) arrow operator to access that
//function.
#include <iostream>
using namespace std;
class Marks
{
private:
    int marks;
public :
    Marks(int x)
    {
        marks = x;
    }
    void Display()
    {
        cout<<marks<<endl;
    }
    Marks *operator->()
    {
        return this;
    }
};
int main()
{
    Marks m1(123);
    m1.Display();

    m1->Display();

    return 0;
}

