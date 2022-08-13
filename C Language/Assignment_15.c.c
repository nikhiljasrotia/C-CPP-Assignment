//Assignment = 15

//1. Write a function to find the greatest number from the given array of any size. (TSRS)
#include <stdio.h>
int LargestElement(int array[],int);
int main()
{
    int max;
    int a[10];
    printf("Enter Array");
    for(int i = 0;i<10;i++)
      scanf("%d",&a[i]);
      
    max = LargestElement(a,10);
    
    printf("The LargestElement of Array is %d",max);
}
int LargestElement(int array[],int n)
{
    int max = array[0];
    for(int i = 0;i<n;i++)
    {
        if(array[i]>max)
        max = array[i];
    }
    
    return max;
}
//2. Write a function to find the smallest number from the given array of any size. (TSRS)
#include <stdio.h>
int SmallestElement(int array[],int);
int main()
{
    int min;
    int a[10];
    printf("\nEnter Array");
    for(int i = 0;i<10;i++)
      scanf("%d",&a[i]);
      
    min = SmallestElement(a,10);
    
    printf("The SmallestElement of Array is %d",min);
}
int SmallestElement(int array[],int n)
{
    int min = array[0];
    for(int i = 0;i<n;i++)
    {
        if(array[i]<min)
        min = array[i];
    }
    
    return min;
}
//3. Write a function to sort an array of any size. (TSRS)
#include <stdio.h>
void SortArray(int [],int);
int main()
{
	int a[100],size,i;
	printf("Enter Size of an Array ");
	scanf("%d",&size);
	
	printf("\nEnter the Element ");
	 for(i = 0; i < size; i++)
	  scanf("%d",&a[i]);
	
	SortArray(a,size);
	for(i=0;i<size;i++)
	printf("%d,",a[i]);
	 
	 return 0;
}
void SortArray(int arr[],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
//4. Write a function to rotate an array by n position in d direction. The d is an indicative
//value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and
//d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )
#include <stdio.h>
void RotateArrOnce(int [],int);
void RotateArr(int [],int , int);
int main()
{
  int a[] = {32,29,40,12,70};
  int i;
  for(i=0;i<5;i++)
  printf("%d ",a[i]);
  printf("\n");
  
   RotateArr(a,5,2);
  for(i=0;i<5;i++)
  printf("%d ",a[i]);
  printf("\n");
   
   
}
void RotateArr(int arr[],int n,int s)
{
    int i;
    for(i=0;i<s;i++)
    {
        RotateArrOnce(arr,n);
    }
}
void RotateArrOnce(int arr[],int n)
{
    int i;
    int temp = arr[0];
    for(i=0;i<n-1;i++)
    arr[i] = arr[i+1];
    arr[n - 1] = temp;
}
//5. Write a function to find the first occurrence of adjacent duplicate values in the array.
//Function has to return the value of the element.

#include <stdio.h>
int Arr(int [],int);
int main()
{
    int a[100],n,i,result;
    printf("Enter Size of Array");
    scanf("%d",&n);
    
    printf("Enter the Array Element");
    
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    result = Arr(a,n);
    
    printf("The First Occurence Duplicate Array is %d",result);
    
    return 0;
}
int Arr(int arr[],int n)
{
    int i,j,res;
    
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                res = arr[i];
                break;
            }
        }
    }
      return res;
}

//6. Write a function in C to read n number of values in an array and display it in reverse
//order.
#include <stdio.h>
void ReverseArray(int arr[],int);
int main()
{
    int a[10],i;
	printf("Enter Array ");
	
	 for(i = 0; i < 10; i++)
	   scanf("%d",&a[i]);
	    
    ReverseArray(a,10);
    
    return 0;
}
void ReverseArray(int arr[],int n)
{
    
    int i;
    for(i=9;i>0;i--)
    printf("%d,",arr[i]);
}
//7. Write a function in C to count a total number of duplicate elements in an array.
#include <stdio.h>
void CountDuplicateArray(int a[],int);
int main()
{
    
      int a[100],n,i;
      printf("Enter Size of Element of Array");
       scanf("%d",&n);
       
       printf("Enter Array");
       
       for(i=0;i<n;i++)
       {
           scanf("%d",&a[i]);
       }
       
       CountDuplicateArray(a,n);
       
      return 0;
}
void CountDuplicateArray(int arr[],int n)
{
     int i,j,count,b = 0;
    
     for(i = 0; i < n; i++)
      {
          count = 0;
          for(j =0; j < n; j++)
          {
              if(arr[i]==arr[j])
              {
                  count++;
              }
          }
          if(count >= 2&&arr[i]!=b)
          {
              b = arr[i];
              printf("%d = %d Duplicates Element\n",arr[i],count);
          }
      }
      
}
//8. Write a function in C to print all unique elements in an array.
#include <stdio.h>
void UniqueArray(int a[],int);
int main()
{
    
      int a[100],n,i;
      printf("Enter Size of Element of Array");
       scanf("%d",&n);
       
       printf("Enter Array");
       
       for(i=0;i<n;i++)
       {
           scanf("%d",&a[i]);
       }
       
       UniqueArray(a,n);
       
      return 0;
}
void UniqueArray(int arr[],int n)
{
     int i,j,count;
    
     for(i = 0; i < n; i++)
      {
          count = 0;
          for(j =0; j < n; j++)
          {
              if(arr[i]==arr[j]&& i != j)
              {
                  count++;
              }
          }
          if(!count)
          {
              printf("%d ",arr[i]);
          }
      }
      
}
//9. Write a function in C to merge two arrays of the same size sorted in descending
//order.
#include <stdio.h>
void MergeArray(int [],int [],int[],int,int);
int main()
{
	int a[20],b[20], c[30],i,m,n;
	
	printf("Enter the Size of 1st ARRAY");
	scanf("%d",&n);
	
	printf("Enter the Size of 2nd ARRAY");
	scanf("%d",&m);
	
	for(i=0;i<n;i++)
	 scanf("%d",&a[i]);
	 
	 for(i=0;i<m;i++)
	 scanf("%d",&b[i]);
	 
	 MergeArray(a,b,c,n,m);
	 for(i=0;i<n+m;i++)
	   printf("c[%d] = %d\n",i,c[i]);
	 
	 return 0;
}

void MergeArray(int a[],int b[],int c[],int n,int m)
{
  int i,j,k,temp;
  
  for(i=0;i<m;i++)
  {
  	c[i] = a[i];
  	c[n + i] = b[i];
  }
  
  for(i=0;i<n+m;i++)
  {
  	for(j=i+1;j<n+m;j++)
  	{
  		if(c[i] < c[j])
  		{
  			temp = c[i];
  			c[i] = c[j];
  			c[j] = temp;
		  }
	  }
  }
    
}
//10. Write a function in C to count the frequency of each element of an array.
#include <stdio.h>
void frequencyfind(int [],int,int);
int main()
{
    int a[100],n,i,freq = 0,key;
    printf("Enter Size of Array");
    scanf("%d",&n);
    
    printf("Enter Array Element");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    printf("Enter the Number U find frequency");
    scanf("%d",&key);
    
    frequencyfind(a,n,key);
    
    return 0;
}
void frequencyfind(int a[],int n,int k)
{
    int count = 0;
    for(int i = 0; i < n ; i ++)
    {
        if(a[i] == k)
        count ++;
    }
    
    printf("\nFrequency of %d is %d",k,count);
}