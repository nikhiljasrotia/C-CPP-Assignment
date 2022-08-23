// Assignment = 23

// 1. Write a C++ program to print Hello MySirG on the screen.
#include <iostream>
using namespace std;
int main()
{
    cout<<"Hello MySirG"<<endl;

    return 0;
}
// 2. Write a C++ program to print Hello on the first line and MySirG on the second line
// using endl.
#include <iostream>
using namespace std;
int main()
{
    cout<<"Hello"<<endl <<"MySirG";

    return 0;
}
// 3. Write a C++ program to calculate the sum of two numbers.
#include <iostream>
using namespace std;
int main()
{
    int a,b,sum;
    cout <<"Enter the Two Number"<<endl;
    cin>>a>>b;

    sum = a + b;

    cout << "The Sum of "<<a<<" and " <<b<< " is " <<sum<<endl;
    return 0;
}
// 4. Write a C++ program to calculate the area of a circle

#include <iostream>
using namespace std;
int main()
{
    float r,area;
    cout<<" Enter the Radius of Circle "<<endl;
    cin >>r;

    area = 3.14 * r * r;

    cout<<"The Area of Circle is "<<area<<endl;
    
    return 0;
}
// 5. Write a C++ program to calculate the volume of a cuboid.
#include <iostream>
using namespace std;
int main()
{
    int l,b,h,vol = 0 ;
    cout<<"Enter the Value of Cuboid "<<endl;
    cin >>l>>b>>h;

    vol = l*b*h;

    cout <<"The Volume of Cuboid "<<vol<<endl;
    
    return 0;
}
// 6. Write a C++ program to calculate an average of 3 numbers.
#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    float avg;
    cout <<"Enter the Value of Three Number "<<endl;
    cin>>a>>b>>c;

    avg = (a+b+c)/3.0;

    cout<< "The Average of Three Number = "<<avg<<endl;

    return 0;
}
// 7. Write a C++ program to calculate the square of a number
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout <<"Enter the Number ";
    cin >>num;

    cout <<"The Square of Number "<<num*num ;
    return 0;
}
// 8. Write a C++ program to swap values of two int variables without using third variable
#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter Two Number ";
    cin >>a>>b;
    cout <<"a = "<<a<<" b = "<<b<<endl; 
    a = a + b;
    b = a - b;
    a = a - b;

    cout <<"a = "<<a<<" b = "<<b<<endl; 


    return 0;
}
// 9. Write a C++ program to find the maximum of two numbers.
#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter Two Number ";
    cin >>a>>b;
    
    if(a>b)
     cout<<"A is Greater "<<a;

    else
     cout<<"B is Greater "<<b;


    return 0;
}
// 10. Write a C++ program to add all the numbers of an array of size 10.

#include <iostream>
using namespace std;
int main()
{
   int a[10],i,sum = 0 ;

   cout<<"Enter the Array Element ";
    for(i=0;i<10;i++)
   {
      cin>>a[i];
   }

   for(i=0;i<10;i++)
   {
      sum = sum + a[i];
   }

   cout<<"The Sum of Array is "<<sum;
   
    return 0;
}