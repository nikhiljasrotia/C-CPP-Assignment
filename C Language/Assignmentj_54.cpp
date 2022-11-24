// 1. Create an ADT array without using STL.
#include <iostream>
using namespace std;
class Array
{
private:
   int arr[100];
   int size = 0;

public:
   void Insertion(int value)
   {
      if (size >= 100)
      {
         cout << "Array Size is Full:\n";
      }
      else
      {
         arr[size] = value;
         size++;
      }
   }
   void ReverseArray()
   {
      for (int i = size - 1; i >= 0; i--)
      {
         cout << arr[i] << " ";
      }
   }
   void ArraySize()
   {
      if (size >= 100)
      {
         cout << "Array Size is Full";
      }
      else
      {
         cout << " Size of an Array :" << size;
      }
   }
   bool SearchArray(int value)
   {
      int i;
      for (i = 0; i < size; i++)
      {
         if (arr[i] == value)
         {
            return true;
         }
      }
      return false;
   }
   void SortArray()
   {
      int i, j, temp;
      for (i = 0; i < size; i++)
      {
         for (j = 0; j < size; j++)
         {
            if (arr[j] > arr[j + 1])
            {
               temp = arr[j];
               arr[j] = arr[j + 1];
               arr[j + 1] = temp;
            }
         }
      }
      for (i = 0; i < size; i++)
         cout << arr[i] << " ";
   }
   void PrintArray()
   {
      int i;
      for (i = 0; i < size; i++)
         cout << arr[i] << " ";
   }
   void Deletion(int index)
   {
      int i;
      for (i = index; i < size - 1; i++)
      {
         arr[i] = arr[i + 1];
      }
      arr[i + 1] = 0;
      size--;
   }
   void InsertAtParticularLocation(int index, int value)
   {
      int i;
      for (i = size - 1; i >= index; i--)
      {
         arr[i + 1] = arr[i];
      }
      arr[index] = value;
   }
};
int main()
{
   Array ar;

   while (1)
   {
      int choice;
      cout <<"\n=================================================\n";
      cout << "1.Insert an Element in the Array :\n";
      cout << "2.Insert an Particular Position in the Array :\n";
      cout << "3.Delete an Element in the Array:\n";
      cout << "4.Print Element in the Array :\n";
      cout << "5.Sort Array:\n";
      cout << "6.Reverse Array :\n";
      cout << "7.Search Element in the Array :\n";
      cout << "8.Array Size :\n";
      cout << "9.Exit:\n";
      cout << "\n\nEnter Your Choice :";
      cin >> choice;

      switch (choice)
      {
      case 1:
      {
         int val;
         cout << "Enter Value :";
         cin>> val;
         ar.Insertion( val);
      }
      break;
      case 2:
      {
         int val,index;
         cout << "Enter Index and Value:"; cin >> index >> val;

         ar.InsertAtParticularLocation(index,val);
      }
      break;
      case 3:
      {
         int del;
         cout << "Which Index Element You Want To Delete:";
         cin >> del;

         ar.Deletion(del);
      }
      break;

      case 4:
      {
         ar.PrintArray();
      }
      break;
      case 5:
      {
         ar.SortArray();
      }
      break;
      case 6:
      {
         ar.ReverseArray();
      }
      break;
      case 7:
      {
         int x;
         cout<<"Which Element You Want To Search :";
         cin>>x;
         ar.SearchArray(x);
      }
      case 8:
      {
         ar.ArraySize();
      }
      case 9:
      {
         exit(0);
      }
      default:
         cout << "Invalid Choice :";
      }
   }

   return 0;
}
// 2. Create an array and implement a search function in the array.
#include <iostream>
using namespace std;
class Array
{
   private:
   int arr[100];
   int size = 0;
   public:
   void Insertion(int index,int value)
   {
      arr[index] = value;
      size++;
   }
   bool SearchArray(int value)
   {
        int i;
        for(i=0;i<size;i++)
        {
           if(arr[i]==value)
           {
              return true;
           }
        }
        return false;
   }
   void PrintArray()
   {
      int i;
      for(i=0;i<size;i++)
         cout<<arr[i]<<" ";
   }

};
int main()
{
   Array ar;
   ar.Insertion(0,1);
   ar.Insertion(1,10);
   ar.Insertion(2,100);
   ar.Insertion(3,12);
   ar.Insertion(4,11);

   int temp = ar.SearchArray(10);

   if(temp)
   {
      cout<<"Element Found :";
   }
   else
   {
      cout<<"Element Not Found :";
   }
   // ar.PrintArray();

   return 0;
}
// 3. Create a function in Array to reverse an array.
#include <iostream>
using namespace std;
class Array
{
private:
   int arr[100];
   int size = 0;

public:
   void Insertion(int index, int value)
   {
      arr[index] = value;
      size++;
   }
   void ReverseArray()
   {
      for (int i = size-1; i>=0; i--)
      {
         cout << arr[i] << " ";
      }
   }
   bool SearchArray(int value)
   {
      int i;
      for (i = 0; i < size; i++)
      {
         if (arr[i] == value)
         {
            return true;
         }
      }
      return false;
   }
   void PrintArray()
   {
      int i;
      for (i = 0; i < size; i++)
         cout << arr[i] << " ";
   }
};
int main()
{
   Array ar;
   ar.Insertion(0, 1);
   ar.Insertion(1, 10);
   ar.Insertion(2, 100);
   ar.Insertion(3, 12);
   ar.Insertion(4, 11);
   ar.Insertion(5, 101);
   ar.Insertion(6, 51);
   ar.Insertion(7, 551);

   ar.PrintArray();
   cout<<endl;
   ar.ReverseArray();

   return 0;
}
// 4. Create a function in Array to sort the given array
#include <iostream>
using namespace std;
class Array
{
private:
   int arr[100];
   int size = 0;

public:
   void Insertion(int index, int value)
   {
      arr[index] = value;
      size++;
   }
   void ReverseArray()
   {
      for (int i = size - 1; i >= 0; i--)
      {
         cout << arr[i] << " ";
      }
   }
   bool SearchArray(int value)
   {
      int i;
      for (i = 0; i < size; i++)
      {
         if (arr[i] == value)
         {
            return true;
         }
      }
      return false;
   }
   void SortArray()
   {
      int i, j, temp;
      for (i = 0; i < size; i++)
      {
         for (j = 0; j < size; j++)
         {
            if (arr[j] > arr[j + 1])
            {
               temp = arr[j];
               arr[j] = arr[j + 1];
               arr[j + 1] = temp;
            }
         }
      }
      for (i = 0; i < size; i++)
         cout << arr[i] << " ";
   }
   void PrintArray()
   {
      int i;
      for (i = 0; i < size; i++)
         cout << arr[i] << " ";
   }
};
int main()
{
   Array ar;
   ar.Insertion(0, 1);
   ar.Insertion(1, 10);
   ar.Insertion(2, 100);
   ar.Insertion(3, 12);
   ar.Insertion(4, 11);
   ar.Insertion(5, 101);
   ar.Insertion(6, 51);
   ar.Insertion(7, 551);

   ar.SortArray();

   return 0;
}
// 5. Create a function in Array to check the size of an array.
#include <iostream>
using namespace std;
class Array
{
private:
   int arr[100];
   int size = 0;

public:
   void Insertion(int index, int value)
   {
      if (size >= 100)
      {
         cout << "Array Size is Full:\n";
      }
      else
      {
         arr[index] = value;
         size++;
      }
   }
   void ReverseArray()
   {
      for (int i = size - 1; i >= 0; i--)
      {
         cout << arr[i] << " ";
      }
   }
   void ArraySize()
   {
      if (size >= 100)
      {
         cout << "Array Size is Full";
      }
      else
      {
         cout << " Size of an Array :" << size;
      }
   }
   bool SearchArray(int value)
   {
      int i;
      for (i = 0; i < size; i++)
      {
         if (arr[i] == value)
         {
            return true;
         }
      }
      return false;
   }
   void SortArray()
   {
      int i, j, temp;
      for (i = 0; i < size; i++)
      {
         for (j = 0; j < size; j++)
         {
            if (arr[j] > arr[j + 1])
            {
               temp = arr[j];
               arr[j] = arr[j + 1];
               arr[j + 1] = temp;
            }
         }
      }
      for (i = 0; i < size; i++)
         cout << arr[i] << " ";
   }
   void PrintArray()
   {
      int i;
      for (i = 0; i < size; i++)
         cout << arr[i] << " ";
   }
};
int main()
{
   Array ar;
   ar.Insertion(0, 1);
   ar.Insertion(1, 10);
   ar.Insertion(2, 100);
   ar.Insertion(3, 12);
   ar.Insertion(4, 11);
   ar.Insertion(5, 101);
   ar.Insertion(6, 51);
   ar.Insertion(7, 551);

   ar.ArraySize();

   return 0;
}
// 6. Create a Dynamic array without using STL.
// 7. Create a function in a dynamic array to return the size of the array.
#include <iostream>
using namespace std;
class DynamicArray
{
private:
  int *arr;
  int size;
  int capacity;

public:
  DynamicArray()
  {
    arr = new int[1];
    size = 0;
    capacity = 1;
  }
  ~DynamicArray()
  {
    delete[] arr;
    size = 0;
    capacity = 0;
  }
  void resize()
  {
    int *temp = new int[2 * capacity];
    for (int i = 0; i < size; i++)
    {
      temp[i] = arr[i];
    }
    delete[] arr;
    arr = temp;
    capacity = 2 * capacity;
  }
  void Insert(int index, int value)
  {
    if (size == capacity)
    {
      resize();
    }
    if (index >= capacity || index < 0)
    {
      cout << "Memory Doesn't Exist :\n";
    }
    arr[index] = value;
    size++;
  }
  void CheckArraySize()
  {
    cout << "Array Size = " << size << endl
         << "Array Capacity = " << capacity << endl;
  }
  void PrintArray()
  {
    int i;
    for (i = 0; i < size; i++)
    {
      cout << arr[i] << " ";
    }
    cout << "\n";
  }
};
int main()
{
  DynamicArray ar;
  
  ar.CheckArraySize();
  ar.Insert(0, 1);
  ar.Insert(1, 23);
  ar.Insert(2, 4);
  ar.Insert(3,45);
  ar.Insert(4,56);
  ar.PrintArray();
  ar.CheckArraySize();

  return 0;
}
// 8. Create a function in a dynamic array to return the capacity of the array.
#include <iostream>
using namespace std;
class DynamicArray
{
private:
  int *arr;
  int size;
  int capacity;

public:
  DynamicArray()
  {
    arr = new int[1];
    size = 0;
    capacity = 1;
  }
  ~DynamicArray()
  {
    delete[] arr;
    size = 0;
    capacity = 0;
  }
  void resize()
  {
    int *temp = new int[2 * capacity];
    for (int i = 0; i < size; i++)
    {
      temp[i] = arr[i];
    }
    delete[] arr;
    arr = temp;
    capacity = 2 * capacity;
  }
  void Insert(int index, int value)
  {
    if (size == capacity)
    {
      resize();
    }
    if (index >= capacity || index < 0)
    {
      cout << "Memory Doesn't Exist :\n";
    }
    arr[index] = value;
    size++;
  }
  void CheckArraySize()
  {
    cout << "Array Size = " << size << endl
         << "Array Capacity = " << capacity << endl;
  }
  void PrintArray()
  {
    int i;
    for (i = 0; i < size; i++)
    {
      cout << arr[i] << " ";
    }
    cout << "\n";
  }
};
int main()
{
  DynamicArray ar;
  
  ar.CheckArraySize();
  ar.Insert(0, 1);
  ar.Insert(1, 23);
  ar.Insert(2, 4);
  ar.Insert(3,45);
  ar.Insert(4,56);
  ar.PrintArray();
  ar.CheckArraySize();

  return 0;
}
// 9. Create an array and implement a search function in the array.
#include <iostream>
using namespace std;
class DynamicArray
{
private:
  int *arr;
  int size;
  int capacity;

public:
  DynamicArray()
  {
    arr = new int[1];
    size = 0;
    capacity = 1;
  }
  ~DynamicArray()
  {
    delete[] arr;
    size = 0;
    capacity = 0;
  }
  void resize()
  {
    int *temp = new int[2 * capacity];
    for (int i = 0; i < size; i++)
    {
      temp[i] = arr[i];
    }
    delete[] arr;
    arr = temp;
    capacity = 2 * capacity;
  }
  bool search(int value)
  {
   if(size==0)
    {
      cout<<"Array is Empty\n";
      return false;
    }
    int i;
    for (i = 0; i < size; i++)
    {
      if (arr[i] == value)
        return true;
    }
    return false;
  }
  void Insert(int index, int value)
  {
    if (size == capacity)
    {
      resize();
    }
    if (index >= capacity || index < 0)
    {
      cout << "Memory Doesn't Exist :\n";
    }
    arr[index] = value;
    size++;
  }
  void CheckArraySize()
  {
    cout << "Array Size = " << size << endl
         << "Array Capacity = " << capacity << endl;
  }
  void PrintArray()
  {
    int i;
    for (i = 0; i < size; i++)
    {
      cout << arr[i] << " ";
    }
    cout << "\n";
  }
};
int main()
{
  DynamicArray ar;


  ar.Insert(0, 12);
  ar.Insert(1, 213);
  ar.Insert(2, 27);
  ar.Insert(3, 26);
  ar.Insert(4, 72);
  ar.Insert(5, 92);
  ar.Insert(6, 112);
  
  if(ar.search(28))
  {
    cout<<"Value Found :\n";
  }
  else{
    cout<<"Value Not Found :\n";
  }


  return 0;
}
// 10. Create a function in Array to reverse an array.
#include <iostream>
using namespace std;
class DynamicArray
{
private:
  int *arr;
  int size;
  int capacity;

public:
  DynamicArray()
  {
    arr = new int[1];
    size = 0;
    capacity = 1;
  }
  ~DynamicArray()
  {
    delete[] arr;
    size = 0;
    capacity = 0;
  }
  void resize()
  {
    int *temp = new int[2 * capacity];
    for (int i = 0; i < size; i++)
    {
      temp[i] = arr[i];
    }
    delete[] arr;
    arr = temp;
    capacity = 2 * capacity;
  }
  bool search(int value)
  {
    if(size==0)
    {
      cout<<"Array is Empty\n";
      return false;
    }
    int i;
    for (i = 0; i < size; i++)
    {
      if (arr[i] == value)
        return true;
    }
    return false;
  }
  void Insert(int index, int value)
  {
    if (size == capacity)
    {
      resize();
    }
    if (index >= capacity || index < 0)
    {
      cout << "Memory Doesn't Exist :\n";
    }
    arr[index] = value;
    size++;
  }
  void CheckArraySize()
  {
    cout << "Array Size = " << size << endl
         << "Array Capacity = " << capacity << endl;
  }
  void PrintArray()
  {
    int i;
    for (i = 0; i < size; i++)
    {
      cout << arr[i] << " ";
    }
    cout << "\n";
  }
  void SortArray();
  void reverseArray();
};
void DynamicArray :: reverseArray()
{
  int i;
  for(i=size-1;i>=0;i--)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}
void DynamicArray :: SortArray()
{
  int i,j,temp;
  for(i=0;i<size-1;i++)
  {
    for(j=i+1;j<size;j++)
    {
      if(arr[i]>arr[j])
      {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
  for(i=0;i<size;i++)
  {
    cout<<arr[i]<<" ";
  }
}
int main()
{
  DynamicArray ar;


  ar.Insert(0, 12);
  ar.Insert(1, 213);
  ar.Insert(2, 27);
  ar.Insert(3, 26);
  ar.Insert(4, 72);
  ar.Insert(5, 92);
  ar.Insert(6, 112);
  
 
 ar.reverseArray();

  return 0;
}
// 11. Create a function in Array to sort the given array
#include <iostream>
using namespace std;
class DynamicArray
{
private:
  int *arr;
  int size;
  int capacity;

public:
  DynamicArray()
  {
    arr = new int[1];
    size = 0;
    capacity = 1;
  }
  ~DynamicArray()
  {
    delete[] arr;
    size = 0;
    capacity = 0;
  }
  void resize()
  {
    int *temp = new int[2 * capacity];
    for (int i = 0; i < size; i++)
    {
      temp[i] = arr[i];
    }
    delete[] arr;
    arr = temp;
    capacity = 2 * capacity;
  }
  bool search(int value)
  {
    if(size==0)
    {
      cout<<"Array is Empty\n";
      return false;
    }
    int i;
    for (i = 0; i < size; i++)
    {
      if (arr[i] == value)
        return true;
    }
    return false;
  }
  void Insert(int index, int value)
  {
    if (size == capacity)
    {
      resize();
    }
    if (index >= capacity || index < 0)
    {
      cout << "Memory Doesn't Exist :\n";
    }
    arr[index] = value;
    size++;
  }
  void CheckArraySize()
  {
    cout << "Array Size = " << size << endl
         << "Array Capacity = " << capacity << endl;
  }
  void PrintArray()
  {
    int i;
    for (i = 0; i < size; i++)
    {
      cout << arr[i] << " ";
    }
    cout << "\n";
  }
  void SortArray();
  void reverseArray();
};
void DynamicArray :: reverseArray()
{
  int i;
  for(i=size-1;i>=0;i--)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}
void DynamicArray :: SortArray()
{
  int i,j,temp;
  for(i=0;i<size-1;i++)
  {
    for(j=i+1;j<size;j++)
    {
      if(arr[i]>arr[j])
      {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
  for(i=0;i<size;i++)
  {
    cout<<arr[i]<<" ";
  }
}
int main()
{
  DynamicArray ar;


  ar.Insert(0, 12);
  ar.Insert(1, 213);
  ar.Insert(2, 27);
  ar.Insert(3, 26);
  ar.Insert(4, 72);
  ar.Insert(5, 92);
  ar.Insert(6, 112);
  
 
  ar.SortArray();

  return 0;
}
