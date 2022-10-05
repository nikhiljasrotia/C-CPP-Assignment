// Assignment = 30
// 1. Write a C++ program to demonstrate the use of try, catch block with the argument as an
// integer and string using multiple catch blocks.
#include <iostream>
using namespace std;
int main()
{
   int n;
   cout<<"Enter Number :";
   cin>>n;

   try
   {
       if(n>1&&n<10)
        throw(101);
       else if(n>10&&n<20)
        throw("Hello ");
   }
   catch(int x)
   {
       cout<<x<<endl;
   }
   catch(const char *p)
   {
       cout<<p;
   }
    return 0;
}
// 2. Write a C++ program to demonstrate try, throw and catch statements.
#include <iostream>
using namespace std;
int main()
{
    try
    {
        throw 'e';
    }
    catch(char ch)
    {
        cout<<"Exception Caught"<<" "<<ch<<endl;
    }

    return 0;
}

// 3. Write a C++ program to perform arithmetic operations on two numbers and throw an
// exception if the dividend is zero or does not contain an operator.
#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter Two Number :";
    cin>>a>>b;

    try{
        if(b == 0)
            throw("Invalid Input :");
        c = a/b;
    }
    catch(const char msg[])
    {
        cout<<msg<<endl;
    }

    cout<<"Result is = "<<c;

    return 0;
}

// 4. Write a C++ program to accept an email address and throw an exception if it does not
// contain @ symbol.
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char email[100];
    int i;
    cout<<"Enter an Email : - ";
    cin.getline(email,100);

    try
    {
        if(strchr(email,'@')==0)
            throw("Not Found :\n");
    }

    catch(const char*p)
    {
        cout<<p<<endl;
    }

    cout<<email<<endl;

    return 0;
}
// 5. Write a C++ program to accept a mobile number and throw an exception if it does not
// contain 10 digits.
#include <iostream>
using namespace std;
int main()
{
    long long int MobileNumber ,temp;
    int count = 0;
    cout<<"Enter any Mobile Number :";
    cin>>MobileNumber;

    temp = MobileNumber;
    while(temp!=0)
    {
        count++;
        temp /= 10;
    }

    try
    {
       if(count!=10)
        {
            throw("it doesn't contain 10 digits.:\n");
        }
        else
            cout<<MobileNumber;
    }
    catch(const char *msg)
    {
        cout<<msg<<endl;
    }

    return 0;
}

// 6. Write a C++ program to accept area pin code and throw an exception if it does not
// contain 6 digits.
#include <iostream>
using namespace std;
int main()
{
     long int PinCode ,temp;
    int count = 0;
    cout<<"Enter City PINCODE : " ;
    cin>>PinCode;

    temp = PinCode;
    while(temp!=0)
    {
        count++;
        temp /= 10;
    }

    try
    {
       if(count!=6)
        {
            throw("it doesn't contain 6 digits.:\n");
        }
        else
            cout<<PinCode;
    }
    catch(const char *msg)
    {
        cout<<msg<<endl;
    }

    return 0;
}
// 7. Write a C++ program to accept a username if the username has less than 6 characters
// or does contain any digit or special symbol.
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char Username[20];
    int i,digit,_special_symbol,length;
    digit = _special_symbol = 0;

    cout<<"Enter UserName :";
    cin.getline(Username,sizeof(Username));

    length = strlen(Username);

    for(i=0;i<length;i++)
    {
        if(Username[i]>'0'&&Username[i]<'9')
            digit = 1;
         else if((Username[i]>=33 &&Username[i]<=47)||(Username[i]>=58&&Username[i]<=64)||(Username[i]>=91&&Username[i]<=96)||(Username[i]>=123&&Username[i]<=126))
            _special_symbol = 1;
    }
    try
    {
        if(digit == 1)
            throw digit;
        else if(_special_symbol == 1)
            throw("UserName Contains a Special Symbol :\n");
    }
    catch(int n)
    {
        cout<<"UserName Contains a  Digit :"<<endl;
        exit(0);
    }
    catch( const char *p)
    {
        cout<<p;
        exit(0);
    }
    try
    {
        if(length<6)
            throw(404);
        else
        {
            cout<<"Valid UserName :\n";
            cout<<Username;
        }
    }
    catch(int n)
    {
        cout<<"UserName Atlest Contains 6 Character :";
    }

    return 0;
}
// 8. Write a C++ program to accept a password and throw an exception if the password has
// less than 6 characters or does not contain a digit or does not contain any special
// character or does not contain any capital letter.
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char Password[20];
    int length,Digit,_captial_letter,_special_symbol,i;
    _special_symbol = Digit = _captial_letter = 0;

    cout<<"Enter Your Password :";
    cin.getline(Password,20);

    length = strlen(Password);

    for(i=0;i<length;i++)
    {
        if(Password[i]>'0'&&Password[i]<'9')
            Digit = 1;
        else if(Password[i]>'A'&&Password[i]<'Z')
            _captial_letter = 1;
        else if((Password[i]>=33 &&Password[i]<=47)||(Password[i]>=58&&Password[i]<=64)||(Password[i]>=91&&Password[i]<=96)||(Password[i]>=123&&Password[i]<=126))
            _special_symbol = 1;
    }
    try
    {
      if(length<=6 && Digit!=0 && _captial_letter!=0 && _special_symbol!=0)
       cout<<Password<<endl;
      else
        throw("Not a Password :");

    }
    catch(const char *str)
    {
        cout<<str<<endl;
    }

    return 0;
}
// 9. Write a C++ program to accept Gmail id only and throw an exception if the id does not
// contain @ and gmail.com.
#include <iostream>
#include <cstring>
bool CheckSubstring(char[],char[]);
using namespace std;
int main()
{
    char gmail[50];
    char temp[] = "gmail.com";
    int i,flag = false;
    int length;
    int SubstringResult;
    cout<<"Enter Your Gmail Id :";
    cin.getline(gmail,50);

    length = strlen(gmail);

    for(i=0;i<gmail[i]!='\0';i++)
    {
        if(gmail[i]=='@')
        {
            flag = true;
            break;
        }
    }
    SubstringResult = CheckSubstring(gmail,temp);
    try
    {
        if(flag!=true)
            throw(404);
        else if(SubstringResult!=true)
            throw("Gmail.com is Missing :");
    }
    catch(int n)
    {
        cout<<"In Your Gmail '@' is Missing :";
        exit(0);
    }
    catch(const char *p)
    {
        cout<<p;
        exit(0);
    }
    try
    {
        if(length<20)
            throw 'w';
        else
        {
            cout<<"Your Gmail ID is Valid :\n";
            cout<<gmail;
        }
    }
    catch(...)
    {
        cout<<"Your Gmail has Atleast 20 Character :";
    }

    return 0;
}
bool CheckSubstring(char str[],char s[])
{
    int length_of_str,length_of_s;
    int differ,i,j;
    int flag;
    length_of_str = strlen(str);
    length_of_s = strlen(s);

    differ = length_of_str - length_of_s + 1;

    for(i=0;i<differ;i++)
    {
        flag = true;
        for(j=0;j<length_of_s;j++)
        {
            if(s[j]!=str[i+j])
            {
                flag = false;
                break;
            }
        }
        if(flag!=false)
            return true;
    }
    return false;
}

// 10. Write a C++ program to accept Nickname and throw an exception if it has greater than 8
// characters or does contain a digit or special symbol or space.
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char Nickname[50];
    int i, length;
    cout << "Enter Your Nickname : ";
    cin.getline(Nickname, 50);

    length = strlen(Nickname);

    try
    {
        for (i = 0; i < length; i++)
        {
            if (Nickname[i] > '0' && Nickname[i] < '9')
              throw (404);
            else if(Nickname[i]==' ')
             throw 'e';
             else if((Nickname[i]>=33 &&Nickname[i]<=47)||(Nickname[i]>=58&&Nickname[i]<=64)||(Nickname[i]>=91&&Nickname[i]<=96)||(Nickname[i]>=123&&Nickname[i]<=126))
             throw("NickName Doesn't Contain Special Symbol :");
        }
    }
    catch(int n)
    {
        cout<<"NickName Doesn't Contain Digit :";
        exit(0);
    }
    catch(char ch)
    {
        cout<<"NickName Doesn't Contain any Space :";
        exit(0);
    }
    catch(const char *ptr)
    {
        cout<<ptr;
        exit(0);
    }
    try
    {
        if(length>8)
         throw (404);
        else
        {
            cout<<"Your NickName is Valid :\n";
            cout<<Nickname;
        }
    }
    catch(...)
    {
        cout<<"NickName Shouldn't Greater than 8 Character :";
    }
    
    return 0;
}