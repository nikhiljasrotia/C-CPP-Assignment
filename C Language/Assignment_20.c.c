//ASSIGNMENT = 20
//1. Write a function to swap values of two in variables of calling function. (TSRS)
#include <stdio.h>
void swap(int* ,int*);
int main()
{
	int a,b;
	printf("Enter A Value :");
	scanf("%d",&a);
	printf("Enter B Value :");
	scanf("%d",&b);
	
	swap(&a,&b);
	
	printf("a = %d\nb = %d",a,b);
	
	return 0;
}
void swap(int *x,int *y)
{
	int c;
	c = *x;
	*x = *y;
	*y = c;
	
}
//2. Write a function to swap strings of two char arrays of calling functions. (TSRS)
#include <stdio.h>
void swapstring(char **p,char **q);
int main()
{
    char *name1 = "Mango";
    char *name2 = "Apple";
    
    printf("Before Swapping\n");
    printf("name1 = %s\n",name1);
    printf("name2 = %s",name2);    
    
	swapstring(&name1,&name2);
	printf("\nAfter Swapping\n");
	printf("name1 = %s\n",name1);
	printf("name2 =  %s",name2);
	
	return 0;
}
void swapstring(char **p,char **q)
{
	char *temp = NULL;

		temp = *p;
		*p = *q;
		*q = temp;
	
}
//3. Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]
#include <stdio.h>
void SortArray(int *ptr,int);
int main()
{
	int array[10] = {34,33,22,35,67,88,122,100,345,4};
	int i;
	
	SortArray(array,10);
}
void SortArray(int *ptr,int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if (*(ptr+i)>*(ptr + j))
			{
				temp =  *(ptr+i);
				*(ptr+i) = *(ptr + j);
;			*(ptr + j)= temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",*(ptr+i));
	}
}
//4. Write a program in C to demonstrate how to handle the pointers in the program.
#include <stdio.h>
int main()
{
	int a,*ptr;
	ptr = &a;
	
	printf("Enter a Value of A");
	scanf("%d",&a);
	
	printf("Address of a = %d\n",ptr);
	printf("Value Stored in a = %d\n",*ptr);
	
	return 0;
}
//5. Write a program to find the maximum number between two numbers using a pointer
#include <stdio.h>
int main()
{
  int a,b, *p ,*q;
  p = &a;
  q = &b;
  printf("Enter Two Number");
  scanf("%d %d",p,q);
  
  if(*p > *q)
     printf("A is Greater %d",a);
  else
     printf("B is Greater %d",b);
	 
	 	
	return 0;
	
}
//6. Write a program to calculate the length of the string using a pointer
#include <stdio.h>
int length(char *ptr);
int main()
{
	char str[10];
	int len;
	printf("Enter String :");
	fgets(str,sizeof(str),stdin);
	len = length(str);
	
	printf("The Length of String is %d",len-1);
	
	return 0;
}
int length (char *ptr)
{
	int count = 0;
	while(*ptr!='\0')
	{
		count++;
		ptr++;
	}
    
    return count;
}
//7. Write a program to count the number of vowels and consonants in a string using a
//pointer.
#include <stdio.h>
#include <string.h>
int main()
{
	char str[20],*ptr;
	int vowels = 0,consonants=0;
	
	printf("Enter String: ");
	fgets(str,sizeof(str),stdin);
	
	ptr = str;
	

	while(*ptr!='\0')
	{
		if(*ptr=='a'||*ptr=='e'|| *ptr == 'i'|| *ptr == 'o'|| *ptr == 'u'||*ptr=='A'||*ptr=='E'|| *ptr == 'I'|| *ptr == 'O'|| *ptr == 'U')
		{
			vowels++;
		}
		consonants++;
		ptr++;
	}
	
	
	
	printf("The vowels in %s = %d\n",str,vowels);
    printf("The Consonants in %s = %d\n",str,consonants);		
	return 0;
}
//8. Write a program to compute the sum of all elements in an array using pointers.
#include <stdio.h>
int main()
{
	int a[10],i,*ptr;
	ptr = a;
	int sum =  0;
	
	printf("Enter Array");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<10;i++)
	{
		sum = sum + *(ptr + i);
	}
	
	printf("The Sum of Array is %d",sum);
	
	
	return 0;

}
//9. Write a program to print the elements of an array in reverse order.
#include <stdio.h>
int main()
{
	int a[10],i,*ptr;
	ptr = a;
	int sum =  0;
	
	printf("Enter Array");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=9;i>=0;i--)
	{
	  printf("%d,",*(ptr+i));
	}
	
	
	return 0;
}
//10. Write a program to print a string in reverse using a pointer
#include <stdio.h>
#include <string.h>
int main()
{
	char str[10],str2[10],*p,*q;
	
	printf("Enter String :" );
	fgets(str,sizeof(str),stdin);
	
    p = str + strlen(str) - 1;
	q = str2;
	
	while(p>=str)
	{
	  *q = *p;
	   q++;
	   p--;
	}
	
	printf("%s",str2);
	
}
