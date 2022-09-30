// Assignment = 29
// 1.Write a C++ program to convert Primitive type to Complex type.
// Example -
// int main()
// {
// Complex c1;
// Int x=5;
// c1=x;
// return 0;
// }
#include <iostream>
using namespace std;
class Complex
{
  private:
   int real;
   int imag;
   public :
   Complex()
   {
      cout<<"Default Constructo:\n";
   }
   Complex(int x)
   {
      cout<<"Parameterized Constructor :\n";
        real = x;
        imag = x;
   }
   void Display()
   {
      cout<<real<<" + "<<imag<<"i"<<endl;
   }
};
int main()
{
   Complex c1;
  int x = 5;
   c1 = 5;

  c1.Display();
   return 0;
}
// 2. Write a C++ program to convert Complex type to Primitive type.
// Example -
// int main()
// {
// Complex c1;
// c1.setData(3,4);
// int x;
// x=c1;
// return 0;
// }
#include <iostream>
using namespace std;
class Complex
{
 private:
  int real;
  int imag;
  public :
  Complex()
  {
   cout<<"Default Constructor:\n";
  }
  void SetData(int x)
  {
     real = x;
     imag = x;
  }
  operator int()
  {
   cout<<"Complex to Primitive Type:\n";
   return real;
  }
  void Display()
  {
   cout<<real<<" + "<<imag<<"i"<<endl;
  }
};
int main()
{
   Complex c1;
   c1.SetData(4);
   c1.Display();
   int x;
   x = c1;
   cout<<x;

   return 0;
}
// 3. Create a Product class and convert Product type to Item type using constructor
// int main()
// {
// Item i1;
// Product p1;
// p1.setData(3,4);
// i1=p1;
// return 0;
// }
#include <iostream>
using namespace std;
class Product
{
private:
   int a, b;
public:
   Product() { cout << "Default Constructor for Product:\n"; };
   void SetData(int x, int y)
   {
      a = x;
      b = y;
   }
   int GetA()
   {
      return a;
   }
   int GetB()
   {
      return b;
   }
   void Display()
   {
      cout << "(" << a << "," << b << ")" << endl;
   }
};
class item
{
private:
   int a, b;
public:
   item() { cout << "Default Constructor for item :\n"; };
   item(Product C)
   {
      cout<<"Product type to Item type using constructor:\n";
      a = C.GetA();
      b = C.GetB();
   }
   void SetData(int x, int y)
   {
      a = x;
      b = y;
   }
   void Display()
   {
      cout << "(" << a << "," << b << ")" << endl;
   }
};
int main()
{
   item l1;
   Product p1;
   p1.SetData(3, 4);
   p1.Display();
   l1 = p1;
   l1.Display();

   return 0;
}
// 4. Create Product class and convert Product type to Item type using casting operator
// int main()
// {
// Item i1;
// Product p1;

// p1.setData(3,4);
// i1=p1;
// return 0;
// }
#include <iostream>
using namespace std;
class Item
{
  private:
   int a,b;
   public :
   Item()
   {
      cout<<"Default Constructor for item:\n";
      a = 0;
      b = 0;
   }
   void SetData(int x,int y)
   {
      a = x;
      b = y;
   }
   void Display()
   {
      cout<<"("<<a<<","<<b<<")"<<endl;
   }
};
class Product
{
  private:
   int a,b;
   public :
   Product()
   {
      cout<<"Default Constructor for Product:\n";
      a = 0;
      b = 0;
   }
   void SetData(int x,int y)
   {
      a = x;
      b = y;
   }
   operator Item()
   {
      Item temp;
      temp.SetData(a,b);
      return temp;
   }
   void Display()
   {
      cout<<"("<<a<<","<<b<<")"<<endl;
   }
};
int main()
{
   Item l1;
   Product p1;
   p1.SetData(3,4);
   l1 = p1;
   l1.Display();

   return 0;
}
// 5. Create two classes Invent1 and Invent2 and also add necessary constructors in it. Now add
// functions to support Invent1 to float and Invent1 to Invent2 type.
// Example -
// int main()
// {
// Invent1 s1=(4,5);
// Invent2 d1;
// float tv;
// tv=s1;
// d1=s1;
// return 0;
// }
#include <iostream>
using namespace std;
class Invent1
{
 private:
     float a,b;
 public:
    Invent1()
    {
        cout<<"Default Constructor for Invent1:\n";
        a = 0;
        b = 0;
    }
    Invent1(float x,float y)
    {
        cout<<"Parameterized Constructor for Invent1:\n";
        a = x;
        b = y;
    }
    int GetA()
    {
        return a;
    }
    int GetB()
    {
        return b;
    }
    operator float()
    {
        cout<<"Invent1 to float TypeCasting:\n";
        return a;
    }
    void Display()
    {
        cout<<"("<<a<<","<<b<<")"<<endl;
    }
};
class Invent2
{
private:
     float a,b;
 public:
    Invent2()
    {
        cout<<"Default Constructor for Invent2:\n";
        a = 0;
        b = 0;
    }
    Invent2(float x,float y)
    {
        cout<<"Parameterized Constructor for Invent2:\n";
        a = x;
        b = y;
    }
    Invent2(Invent1 C)
    {
        a = C.GetA();
        b = C.GetB();
    }
    void Display()
    {
        cout<<"("<<a<<","<<b<<")"<<endl;
    }
};
int main()
{
    Invent1 s1(3,4);
    Invent2 d1;
    float tv;
    tv = s1;
    d1 = s1;
    d1.Display();

    return 0;
}
// 6. Create a Time class and take Duration in seconds. Now you need to convert seconds(i.e in
// int ) to Time class.

// Example-
// int main()

// {
// int duration;
// cout<<”Enter time duration in minutes”;
// cin>>duration;
// Time t1 = duration;
// t1.display();
// return 0;
// }
#include <iostream>
using namespace std;
class Time
{
private:
    int hour,Min,sec;
public:
    Time()
    {
        cout<<"Default Constructor:\n";
    }
    Time(int duration)
    {
        cout<<"int to Time Object Conversion:\n";
        hour = duration/3600;
        Min = (duration-hour*3600)/60;
        sec = duration - hour*3600 - Min*60;
    }
    Time(int x,int y,int z)
    {
        hour = x;
        Min = y;
        sec = z;
    }
    void Display()
    {
        cout<<hour<<":"<<Min<<":"<<sec<<endl;
    }
};
int main()
{
    int duration;
    cout<<"Enter Time Duration in Second:";
    cin>>duration;
    Time t1;
    t1 = duration;
    t1.Display();


    return 0;
}
// 7. Create two class Time and Minute and add required getter and setter including constructors.
// Now you need to type cast Time object into Minute to fetch the minute from Time and display it.
// Example -
// int main()
// {
// Time t1(2,30);
// t1.display();
// Minute m1;
// m1.display();
// m1=t1 // Fetch minute from time
// t1.display();
// m1.display();
// return 0;
// }
#include <iostream>
using namespace std;
class Time
{
private:
    int hour,min;
public:
    Time()
    {
        cout<<"Default Constructor for Time:\n";
    }
    int GetMin()
    {
        return min;
    }
    Time(int x,int y)
    {
        cout<<"Parameterized Constructor for Time:\n";
        hour = x;
        min = y;
    }
    void Display()
    {
        cout<<hour<<":"<<min<<endl;
    }
};
class Minute
{
private:
    int Min;
public:
    Minute()
    {
        cout<<"Default Constructor for Minute:\n";
    }
    Minute(Time C)
    {
        cout<<"Fetch Minute from Time:\n";
        Min = C.GetMin();
    }
    Minute(int x)
    {
        cout<<"Parameterized Constructor for Minute :\n";
        Min = x;
    }
    void Display()
    {
        cout<<Min<<endl;
    }
};
int main()
{
    Time t1(2,10);
    t1.Display();
    Minute m1;
    m1 = t1;
    m1.Display();
    t1.Display();

    return 0;
}

// 8. Create a Rupee class and convert it into int. And Display it.

// Example-
// int main()

// {
// Rupee r = 10;
// int x = r;
// cout<<x;
// return 0;
// }
#include <iostream>
using namespace std;
class Rupee
{
private:
    int x;
public:
    Rupee()
    {
        cout<<"Default Constructor:\n";
        x = 0;
    }
    Rupee(int value)
    {
        cout<<"Parameterized Constructor:\n";
        x = value;
    }
    operator int()
    {
        cout<<"Rupee to Int:\n";
        return x;
    }
    void Display()
    {
        cout<<"Rs.= "<<x<<endl;
    }
};
int main()
{
    Rupee r = 10;
    int x;
    x = r;
    cout<<x<<endl;

    return 0;
}
// 9. Create a Dollar class and add necessary functions to support int to Dollar type conversion.

// Example-
// int main()

// {
// int x = 50;
// Dollar d;
// d = x;
// d.display();
// return 0;
// }
#include <iostream>
using namespace std;
class Dollar
{
private:
    int x;
public:
    Dollar()
    {
        cout<<"Default Constructor:\n";
        x = 0;
    }
    Dollar(int value)
    {
        cout<<"Parameterized Constructor:\n";
        x = value;
    }
    void Display()
    {
        cout<<"$= "<<x<<endl;
    }
};
int main()
{
    int x = 50;
    Dollar d;
    d = x;
    d.Display();

    return 0;
}
// 10. Create two classes Rupee and Dollar and add necessary functions to support Rupee to
// Dollar and Dollar to Rupee conversion.

// Example-
// int main()

// {
// Rupee r = 23;
// Dollar d = r; // Rupee to Dollar conversion
// d.display();
// r.display();
// r = d; // Dollar to Rupee Conversion
// d.display();
// r.display();
// return 0;
// }
#include <iostream>
using namespace std;
class Rupee
{
  private:
      float x;
  public:
    Rupee()
    {
        cout<<"Default Constructor for Rupee:\n";
        x = 0 ;
    }
    float GetRupee()
    {
        return x;
    }
    Rupee(float value)
    {
        cout<<"Parameterized Constructor for Rupee :\n";
        x = value;
    }
    void Display()
    {
        cout<<"Rs. = "<<x<<endl;
    }
};
class Dollar
{
  private:
      float x;
  public:
    Dollar()
    {
        cout<<"Default Constructor for Dollar:\n";
        x = 0 ;
    }
    Dollar(Rupee C)
    {
        cout<<"Rupee To Dollar Conversion:\n";
        x = C.GetRupee()/81.95;
    }
    Dollar(float value)
    {
        cout<<"Parameterized Constructor for Dollar :\n";
        x = value;
    }
    operator Rupee()
    {
        cout<<"Dollar To Rupee Conversion:\n";
        return x*81.95;
    }
    void Display()
    {
        cout<<"$ = "<<x<<endl;
    }
};
int main()
{
    Rupee r = 23;
    Dollar d = r; //Rupee To Dollar Conversion
    d.Display();
    r.Display();
    r = d;  //Dollar To Rupee Conversion
    d.Display();
    r.Display();

    return 0;
}
