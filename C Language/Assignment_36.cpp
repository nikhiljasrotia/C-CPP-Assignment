// Assignment = 36
// 1. Using STL Array gets and sets a reference to an element based on a given index.
#include <iostream>
#include <array>
#include <tuple>
using namespace std;
int main()
{
    array <int,5> ar = {34,32,23,12,24};

      cout<<get<0>(ar)<<endl;
      cout<<get<1>(ar)<<endl;
      cout<<get<2>(ar)<<endl;
      cout<<get<3>(ar)<<endl;
      cout<<get<4>(ar)<<endl;

    return 0;
}
// 2. Using STL Array returns the total number of elements in the array.
#include <iostream>
#include <array>
using namespace std;
int main()
{
    array <int,5> ar = {34,22,11,23,567};

    for(int i = 0;i<ar.size();i++)
    {
       cout<<ar.at(i)<<" ";
    }

    return 0;
}
// 3. Find the first and last element using the STL array.
#include <iostream>
#include <array>
using namespace std;
int main()
{
    array <int,10> ar = {45,3,23,21,22,34,4,56,21,10};

    for(int i = 0; i < ar.size(); i++)
    {
        cout<<ar.at(i)<<" ";
    }

    cout<<"\nThe First Element of Array is : "<<ar.front();

    return 0;
}
// 4. Returns the element from the given index using the STL array.
// 5. C++ STL program to demonstrate example of array::rbegin() and array::rend()
// functions
// 6. Using STL to check whether an array is empty or not.
#include <iostream>
#include <array>
#include <algorithm>
using namespace std;
int main()
{
     int ar[]= {7,2,45,11,10,14,5,4,41,12};
     int n = sizeof(ar)/sizeof(int);

    sort(ar,ar+n ,greater<int>());

    for(int i = 0; i < 10; i++)
    {
        cout<<ar[i]<<" " ;
    }

    return 0;
}

// 7. Sort an array in ascending order using sort() function in C++ STL
#include <iostream>
#include <array>
#include <algorithm>
using namespace std;
int main()
{
     int ar[]= {7,2,45,11,10,14,5,4,41,12};
     int n = sizeof(ar)/sizeof(int);

    sort(ar,ar+n);

    for(int i = 0; i < 10; i++)
    {
        cout<<ar[i]<<" " ;
    }

    return 0;
}

// 8. Sort an array in descending order using sort() function in C++ STL
#include <iostream>
#include <array>
#include <algorithm>
using namespace std;
int main()
{
     int ar[]= {7,2,45,11,10,14,5,4,41,12};
     int n = sizeof(ar)/sizeof(int);

    sort(ar,ar+n ,greater<int>());

    for(int i = 0; i < 10; i++)
    {
        cout<<ar[i]<<" " ;
    }

    return 0;
}

// 9. C++ program to find the integers which come an odd number of times in an array
// using C++ STL.
// 10. Given an integer array nums , return an array answer such that answer[i] is equal to
// the product of all the elements of nums except nums[i] .
#include <iostream>
#include <array>
using namespace std;
int main()
{
    array <int,5> ar = {1,-1,0,3,-3};

    int i,multi = 1,Count = 0;

    for(i=0;i<ar.size();i++)
    {
      if(ar.at(i)!=0)
            multi = multi * ar.at(i);
      else
        Count++;
    }
    for(i=0;i<ar.size(); i++)
    {
        if(Count>1)
        {
            ar.at(i) = 0;
        }
        else if(Count == 1)
        {
            if(ar.at(i)!= 0)
                {
                    ar.at(i) = 0;
                }
            else
                {
                    ar.at(i) = multi;
                }
        }
        else
        {
            ar.at(i) = multi/ar.at(i);
        }
    }
    for(i=0;i<ar.size();i++)
    {
        cout<<ar.at(i)<<" ";
    }

    return 0;
}

