// Assignment = 31
// 1. Define a class Person with instance members name and age. Also define member
// functions setName(), setAge(), getName(), getAge(). Now define class Employee by
// inheriting Person class. In the Employee class define empid and salary as instance
// members. Also define setEmpid, setSalary, getEmpid, getSalary.
#include <iostream>
#include <cstring>
using namespace std;
class Person
{
private:
    char name[20];
    int age;
public:
    void setName(char *s)
    {
        strcpy(name,s);
    }
    char *getName()
    {
        return name;
    }
    void setAge(int x)
    {
        age = x;
    }
    int getAge()
    {
        return age;
    }
};
class Empolyee : public Person
{
private:
    int Empid;
    int sallery;
public:
    void setEmpid(int x)
    {
        Empid = x;
    }
    void setSallery(int n)
    {
        sallery = n;
    }
    int getEmpid()
    {
        return Empid;
    }
    int getsallery()
    {
        return sallery;
    }
};
int main()
{
    Empolyee e1;
    e1.setName("Nikhil");
    e1.setAge(22);
    e1.setEmpid(19023);
    e1.setSallery(25000);

    cout<<"Employee Name :"<<e1.getName()<<endl;
    cout<<"Employee Age :"<<e1.getAge()<<endl;
    cout<<"Employee ID :"<<e1.getEmpid()<<endl;
    cout<<"Employee Sallery :"<<e1.getsallery()<<endl;

    return 0;
}
// 2. Write a C++ program to add two numbers using single inheritance. Accept these two
// numbers from the user in base class and display the sum of these two numbers in
// derived class.
#include <iostream>
using namespace std;
class baseclass
{
protected:
    int num1,num2,sum;
public:
    void SetData(int x,int y)
    {
        num1 = x;
        num2 = y;
    }
};
class derivedclass : public baseclass
{
public:
    void CalculateSum()
    {
        sum = num1 + num2;
    }
    void Display()
    {
        cout<<"The Sum of Two Number :"<<sum<<endl;
    }
};
int main()
{
    derivedclass c1;
    c1.SetData(23,23);
    c1.CalculateSum();
    c1.Display();

    return 0;
}

// 3. Write a C++ program to calculate the percentage of a student using multi-level
// inheritance. Accept the marks of three subjects in base class. A class will be derived
// from the above mentioned class which includes a function to find the total marks
// obtained and another class derived from this class which calculates and displays the
// percentage of students.
#include <iostream>
using namespace std;
class A
{
protected:
    int m1,m2,m3;
public:
    void AcceptMarks(int x,int y,int z)
    {
        m1 = x;
        m2 = y;
        m3 = z;
    }
};
class B : public A
{
protected:
    int total;
public:
    void FindTotal()
    {
        total = m1 + m2 + m3;
    }
};
class C : public B
{
protected :
    float percentage;
public:
    void CaluculatePercentage()
    {
        percentage = (total*100)/300.0;
    }
    void DisplayPercentage()
    {
        cout<<percentage;
    }
};
int main()
{
    C obj;
    obj.AcceptMarks(45,40,79);
    obj.FindTotal();
    obj.CaluculatePercentage();
    obj.DisplayPercentage();

    return 0;
}

// 4. Write a C++ program to design a base class Person (name, address,
// phone_no). Derive a class Employee (eno, ename) from Person. Derive a
// class Manager (designation, department name, basic-salary) from
// Employee. Write a menu driven program to:
// a. Accept all details of 'n' managers.
// b. Display manager having highest salary
// Output -
#include <iostream>
using namespace std;
class Person
{
protected:
    char name[20];
    char Address[20];
    long long Phone_no;
};
class Employee : public Person
{
protected:
    int eno;
    char ename[20];
};
class Manager : public Employee
{
protected:
    char Designation[20];
    char Department[20];
    float BasicSallery;
public:
    void AcceptDetail()
    {
        cout<<"Enter Employee ID: ";
        cin>>eno;
        cin.ignore();
        cout<<"Enter Employee Name : ";
        cin.getline(ename,sizeof(ename));
        cout<<"Enter Employee Address : ";
        cin.getline(Address,sizeof(Address));
        cout<<"Enter Phone No : ";
        cin>>Phone_no;
        cin.ignore();
        cout<<"Enter Designation : ";
        cin.getline(Designation,sizeof(Designation));
        cout<<"Enter Department Name :";
        cin.getline(Department,sizeof(Department));
        cout<<"Enter Basic Sallery :";
        cin>>BasicSallery;
    }
    void ShowData()
    {
        cout<<"\nEnter Details of Manager :\n";
        cout<<"---------------------------\n";
        cout<<"Enter Employee ID: ";
        cout<<eno<<endl<<endl;
        cout<<"Enter Employee Name : ";
        cout<<ename<<endl<<endl;
        cout<<"Enter Employee Address : ";
        cout<<Address<<endl<<endl;
        cout<<"Enter Phone No. : ";
        cout<<Phone_no<<endl<<endl;
        cout<<"Enter Designation : ";
        cout<<Designation<<endl<<endl;
        cout<<"Enter Department Name :";
        cout<<Department<<endl<<endl;
        cout<<"Enter Basic Sallery :";
        cout<<BasicSallery;
    }

};
int main()
{
    Manager m1[2];
    int i,n;
    cout<<"How Many Manager You Want Enter :";
    cin>>n;
    for(i=0;i<n;i++)
    {
        m1[i].AcceptDetail();
    }
    for(i=0;i<n;i++)
    {
        m1[i].ShowData();
    }

    return 0;
}


// 5. Write a C++ program to define a base class Item (item-no, name, price).
// Derive a class Discounted-Item (discount-percent). A customer purchases

// 'n' items. Display the item-wise bill and total amount using appropriate
// format.
// Output -
#include <iostream>
using namespace std;
class Item
{
public:
    int item_no;
    char item_name[20];
    int price;
};
class Discount_item : public Item
{
public:
    int Discount_percent;
    int disc;
    void SetData()
    {
        cout<<"\nEnter Item Name : ";
        cin>>item_name;
        cout<<endl;
        cout<<"Enter Item No : ";
        cin>>item_no;
        cout<<endl;
        cout<<"Enter Price : ";
        cin>>price;
        cout<<endl;
        cout<<"Enter Discount Percentage : ";
        cin>>Discount_percent;
        cout<<"\n----------------------------\n";
    }
    void display()
    {
        cout<<"Item Name : ";
        cout<<item_name<<endl;
        cout<<"Item No. : ";
        cout<<item_no<<endl;
        cout<<"Item Price : ";
        cout<<price<<endl;
        cout<<"Discount Percent : ";
        cout<<Discount_percent<<endl;
        cout<<"Discounted Price : ";
        cout<<Fun()<<endl;
        cout<<"\n----------------------------\n";

    }
    int Fun()
    {
        disc = price - (Discount_percent*price)/100;
        return disc;
    }
};
int main()
{
    int i,n,price,discount;
    price = discount = 0;

    cout<<"How Many Item You Want To Enter : ";
    cin>>n;

    Discount_item d1[n];
    for(i=0;i<n;i++)
    {
        d1[i].SetData();
        price = price + d1[i].price;
        discount = discount + d1[i].Fun();
    }

    for(i=0;i<n;i++)
    {
        d1[i].display();
    }
    cout<<"Total Price : ";
    cout<<price<<endl;
    cout<<"Total Discount : ";
    cout<<price - discount;

    return 0;
}
// 6. Write a C++ program to demonstrate how a common friend function can
// be used to exchange the private values of two classes. (Use call by
// reference method).
#include <iostream>
using namespace std;
class Second;
class first
{
private:
    int a;
public:
    void SetValue(int x)
    {
        a = x;
    }
    void Display()
    {
        cout<<"First = "<<a<<endl;
    }
    friend void SwapValue(first&,Second &);
};
class Second
{
private :
    int b;
public:
    void SetData(int c)
    {
        b = c;
    }
     void Display()
    {
        cout<<"Second = "<<b<<endl;
    }
    friend void SwapValue(first &,Second &);
};
int main()
{
    first f1;
    Second s1;
    f1.SetValue(23);
    s1.SetData(21);
    cout<<"Before Swapping : \n";
    f1.Display();
    s1.Display();
    SwapValue(f1,s1);
    cout<<"After Swapping : \n";
    f1.Display();
    s1.Display();

    return 0;

}
void SwapValue(first &f,Second &S)
{
    int t;
    t = f.a;
    f.a = S.b;
    S.b = t;
}

// 7. Write class declarations and member function definitions for a C++ base
// class to represent an Employee (emp-code, name).
// Derive two classes as Fulltime (daily rate, number of days, salary) and
// Parttime (number of working hours, hourly rate, salary).
// Write a menu driven program to:
// 1. Accept the details of ‘n’ employees.
// 2. Display the details of ‘n’ employees.

// 3. Search a given Employee by emp-code.
// Output -
#include <iostream>
#include <cstring>
using namespace std;
class Employee
{
public:
    int emp_no;
    char name[20];
};
class Parttime;
class FullTime : public Employee
{
private:
    int number_of_Working_days;
    float daily_rate;
    float salary;
public:
    void Set_Detail_of_fullTime_Employe()
    {
        cout<<"Enter Employee ID : ";
        cin>>emp_no;
        fflush(stdin);
        cout<<"Enter Employee Name :";
        cin.getline(name,sizeof(name));
        cout<<"Enter Number of Working Days of FullTime Employee :";
        cin>>number_of_Working_days;
        cout<<"Enter Daily Rate : ";
        cin>>daily_rate;
        salary = daily_rate * number_of_Working_days;
    }
     void Get_Detail_of_fullTime_Employe()
     {
        cout<<"\n-------------------------------\n";
        cout<<"Employee Number : ";
        cout<<emp_no<<endl;
        cout<<"Employee Name : ";
        cout<<name<<endl;
        cout<<"Number of Working Day of FullTime Employee : ";
        cout<<number_of_Working_days<<endl;
        cout<<"Daily Rate : ";
        cout<<daily_rate<<endl;
        cout<<"Salary of FullTime Employee : ";
        cout<<salary<<endl;
        cout<<"\n-------------------------------\n";
     }
};
class Parttime : public Employee
{
private :
    int number_of_working_hours;
    float hourly_rate;
    float salary;
public:
     void Set_Detail_of_PartTime_Employe()
    {
        cout<<"Enter Employee ID : ";
        cin>>emp_no;
        fflush(stdin);
        cout<<"Enter Employee Name :";
        cin.getline(name,sizeof(name));
        cout<<"Enter Number of Working Hour of PartTime Employee :";
        cin>>number_of_working_hours;
        cout<<"Enter Hourly Rate : ";
        cin>>hourly_rate;
        salary = hourly_rate * number_of_working_hours;
    }
     void Get_Detail_of_PartTime_Employe()
     {
        cout<<"\n-------------------------------\n";
        cout<<"Employee Number : ";
        cout<<emp_no<<endl;
        cout<<"Employee Name : ";
        cout<<name<<endl;
        cout<<"Number of Working Day of PartTime Employee : ";
        cout<<number_of_working_hours<<endl;
        cout<<"Hourly Rate : ";
        cout<<hourly_rate<<endl;
        cout<<"Salary of PartTime Employee : ";
        cout<<salary<<endl;
        cout<<"\n-------------------------------\n";
     }
};
int main()
{
    int const n = 4;
    int i,f,p,choice;
    i = p = f = 0;

    FullTime f1[n];
    Parttime p1[n];

    while(1)
    {
        cout<<"1 Enter Employee Record: \n";
        cout<<"2 Display Employee Record : \n";
        cout<<"3 Search Employee Record : \n";
        cout<<"4 Quit :\n";
        cout<<"\n";
        cout<<"\n";
        cout<<"Enter Your Choice : ";
        cin>>choice;

        switch(choice)
        {
        case 1:
            int type;
            cout<<"Which Employee You Want Enter 'PartTime' Or 'FullTime \n";
            cout<<"1 for fullTime Employee:\n";
            cout<<"2 for PartTime Employee : \n\n";
            cin>>type;
            if(type == 1)
            {
                    f1[i].Set_Detail_of_fullTime_Employe();
                    f++;
            }
            else
            {
                    p1[i].Set_Detail_of_PartTime_Employe();
                    p++;
            }
            break;
        case 2:
            int x,i;
            cout<<"Which Employee You Want Display 'PartTime' Or 'FullTime \n";
            cout<<"1 for fullTime Employee:\n";
            cout<<"2 for PartTime Employee : \n";
            cout<<"3 if You're Display Both the Employee:";
            cin>>x;
            if(x == 1)
            {
                for(i=0;i<f;i++)
                {
                    f1[i].Get_Detail_of_fullTime_Employe();
                }
            }
            else if(x == 2)
            {
               for(i=0;i<p;i++)
               {
                   p1[i].Get_Detail_of_PartTime_Employe();
               }
            }
            else
            {
               for(i=0;i<f;i++)
                {
                    f1[i].Get_Detail_of_fullTime_Employe();
                }
               for(i=0;i<p;i++)
               {
                   p1[i].Get_Detail_of_PartTime_Employe();
               }
            }
            break;
        case 3:
            int a;
            cout<<"Enter Employee ID. :";
            cin>>a;

            for(int i = 0;i<f;i++)
            {
                if(f1[i].emp_no == a)
                {
                    f1[i].Get_Detail_of_fullTime_Employe();
                }
            }
             for(int i = 0;i<p;i++)
            {
                if(p1[i].emp_no == a)
                {
                    p1[i].Get_Detail_of_PartTime_Employe();
                }
            }
            break;
        case 4:
            exit(0);
        default:
             cout<<"Enter Valid Choice " ;
        }
    }
    return 0 ;
}
// 8 - In a bank, different customers have savings account. Some customers may
// have taken a loan from the bank. So bank always maintain information about
// bank depositors and borrowers.
// Design a Base class Customer (name, phone-number). Derive a class
// Depositor(accno, balance) from Customer.
// Again, derive a class Borrower (loan-no, loan-amt) from Depositor.
// Write necessary member functions to read and display the details of ‘n’
// customers.

// Output -
#include <iostream>
using namespace std;
class Customer
{
protected:
   char name[20];
   long phone_no;
};
class Depositer : public Customer
{
protected:
   int Account_no;
   float balance;
};
class Borrower : public Depositer
{
protected:
   int loan_no;
   int loan_balance;

public:
   void AcceptCustomerDetails()
   {
      cout << "Enter Customer Name : ";
      fflush(stdin);
      cin.getline(name, sizeof(name));
      cout << "Enter Customer Phone Number : ";
      cin >> phone_no;
      cout << "Enter Customer A/C No. ";
      cin >> Account_no;
      cout << "Enter Balance : ";
      cin >> balance;
      cout << "Enter Loan No. : ";
      cin >> loan_no;
      cout << "Enter Balance : ";
      cin >> loan_balance;
      cout << endl;
   }
   void ShowingCustomerDetail()
   {
      cout << "\nDetails of Customer \n";
      cout << "\n------------------------------------\n";
      cout << "Customer Name           :" << name << endl;
      cout << "Customer PHone Number   :" << phone_no << endl;
      cout << "Customer A/C No.        :" << Account_no << endl;
      cout << "Balance                 :" << balance << endl;
      cout << "\n------------------------------------\n";
      cout << "Loan No                 :" << loan_no << endl;
      cout << "Loan Balance            :" << loan_balance << endl;
      cout << "\n------------------------------------\n";
   }
};
int main()
{
   int i, n;
   cout << "Enter NO. of Customer Detail You Want To Print : ";
   cin >> n;

   Borrower B1[n];
   for (i = 0; i < n; i++)
   {
      B1[i].AcceptCustomerDetails();
   }
   for (i = 0; i < n; i++)
   {
      B1[i].ShowingCustomerDetail();
   }

   return 0;
}
// 9. Write a C++ program to implement the following class hierarchy:
// Student: id, name
// StudentExam (derived from Student): Marks of 6 subjects
// StudentResult (derived from StudentExam) : percentage
// Define appropriate functions to accept and display details.
// Create 'n' objects of the StudentResult class and display the marklist.
// Output -
#include <iostream>
using namespace std;
class Student
{
protected:
    int ID;
    char name[30];
public:
    void StudentDetails()
    {
        cout<<"\nEnter Student ID :";
        cin>>ID;
        fflush (stdin);
        cout<<"Enter Student Name :";
        cin.getline(name,sizeof(name));
    }
    void GetSTudentNameandID()
    {
        cout<<"--------------------------------\n";
        cout<<"*********Student Marks**********\n";
        cout<<"--------------------------------\n";
        cout<<"Student ID        :"<<ID<<endl;
        cout<<"Student Name      :"<<name<<endl;
        cout<<endl;
        cout<<endl;
    }
};
class StudentExam : public Student
{
private:
    int marks[6];
protected:
    int total = 0;
public:
    void SetMarks()
    {
        int i;
        for(i=0;i<6;i++)
        {
            cout<<"\nEnter Student Subject Marks "<<i+1<<" : ";
            cin>>marks[i];
            total = total + marks[i];
        }
    }
    void GetMarks()
    {
        cout<<"Marks of Subject 1   :"<<marks[0]<<endl;
        cout<<"Marks of Subject 2   :"<<marks[1]<<endl;
        cout<<"Marks of Subject 3   :"<<marks[2]<<endl;
        cout<<"Marks of Subject 4   :"<<marks[3]<<endl;
        cout<<"Marks of Subject 5   :"<<marks[4]<<endl;
        cout<<"Marks of Subject 6   :"<<marks[5]<<endl<<endl;
    }
};
class StudentResult : public StudentExam
{
protected:
    float percentage;
public:
    void CalculatePercentage()
    {
        percentage = (total*100)/(float)600;
    }
    void GetPercentage()
    {
        cout<<"Total Percentage     :"<<percentage<<endl;
        cout<<"--------------------------------\n";
    }
};
int main()
{
   int i,n;
   cout<<"Enter No. of Student You Want : ";
   cin>>n;
   cout<<"\n---------------------------------:\n";
   StudentResult s1[n];
   for(i=0;i<n;i++)
   {
       s1[i].StudentDetails();
       s1[i].SetMarks();
   }
   for(i=0;i<n;i++)
   {
       s1[i].GetSTudentNameandID();
       s1[i].GetMarks();
       s1[i].CalculatePercentage();
       s1[i].GetPercentage();
   }

    return 0;
}
// 10. Consider two base classes
// worker(int code, char name, float salary),
// officer(float DA, HRA)
// class manger(float TA(is 10% of salary), gross salary) is derived from both base
// classes.
// Write necessary member functions.
#include <iostream>
using namespace std;
class Worker
{
protected:
   int code;
   char name[30];
   float salary;

public:
   void SetWorkerDetail()
   {
      cout << "Enter Code  :  ";
      cin >> code;
      cout<<endl;
      cin.ignore();
      cout << "Enter Name  : ";
      cin.getline(name, sizeof(name));
      cout<<endl;
      cout << "Enter Salary : ";
      cin >> salary;
      cout << endl;
   }
};
class Officer
{
protected:
   float DA, HRA;

public:
   void SetOfficerDetail()
   {
      cout << "Enter DA   : ";
      cin >> DA;
      cout<<endl;
      cout << "Enter HRA  : ";
      cin >> HRA;
      cout<<"---------------------------\n";
   }
};
class Manager : public Worker, public Officer
{
protected:
   float TA, gross_salary;

public:
   void CalculateGrossSalary()
   {
      TA = salary / 10;
      gross_salary = salary + DA + HRA + TA;
   }
   void ManagerInformation()
   {
      cout << "-----------------------------------\n";
      cout << "       Manager Information         \n";
      cout << "-----------------------------------\n";
      cout << "Code             :" << code << endl;
      cout << "Name             :" << name << endl;
      cout << "Salary           :" << salary << endl;
      cout << "DA               :" << DA << endl;
      cout << "HRA              :" << HRA << endl;
      cout << "TA               :" << TA << endl;
      cout << "Gross Salary     :" << gross_salary << endl;
   }
};
int main()
{
   int i, n;
   cout << "Enter Manager Count : ";
   cin >> n;
   cout << "Enter Worker Information  for " << n << endl<<endl;;
   Manager m1[n];
   for (i = 0; i < n; i++)
   {
      m1[i].SetWorkerDetail();
      m1[i].SetOfficerDetail();
   }
   for(i=0;i<n;i++)
   {
      m1[i].CalculateGrossSalary();
      m1[i].ManagerInformation();
   }

   return 0;
}
