// Assignment = 22
// 1. Define a function to input variable length string and store it in an array without
// memory wastage.
#include <stdio.h>
#include <stdlib.h>
void *input();
int main()
{
    char *str;	
    str = input();
    printf("Your Name %s\n ",str);
    free(str);
	return 0;
}
void *input()
{
	char ch;
	int i,j;
	i = 0,j = 1;
	char *name;
	name = (char*)malloc(sizeof(char));
	
	if(name == NULL)
	{
		printf("Memory Allocation Failed :");
		return 0;
	}
	printf("Enter Name :");
	while(ch!='\n')
	{
		scanf("%c",&ch);
		j++;
		name = (char*)realloc(name,j*sizeof(char));
		name[i] = ch;
		i++;
	}
	name[i] = '\0';
	return name;
}
// 2. Write a program to ask the user to input a number of data values he would like to
// enter then create an array dynamically to accommodate the data values. Now take
// the input from the user and display the average of data values.
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,i,*ptr,sum = 0;
	float avg;
	
	printf("How Many Number You Want To Enter : ");
	scanf("%d",&n);
	
	ptr = (int*)calloc(n,sizeof(int));
	printf("Enter the Value : ");
	
	if(ptr==NULL)
	{
		printf("Memory Allocation Failed\n");
		return 0;
	}
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&ptr[i]);
	}
	for(i=0;i<n;i++)
	{
		sum = sum + ptr[i];
	}
	avg = sum/(float)n;
	printf("The Average of Number is %f",avg);
	
	free(ptr);
	return 0;
}
// 3. Write a program to calculate the sum of n numbers entered by the user using malloc
// and free.
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,n,*ptr,sum = 0;
	printf("Enter Number of Size : ");
	scanf("%d",&n);
	
	ptr = (int*)malloc(n*sizeof(int));
	if(ptr==NULL)
	{
		printf("Memory Allocation Failed ");
		return 0;
	}
	
	for(i=0;i<n;i++)
	{
		printf("Enter the Value %d: ",i+1);
		scanf("%d",(ptr+i));
	}
	for(i=0;i<n;i++)
	 sum = sum + *(ptr+i);
	 
	printf("The Sum of Number = %d",sum); 
	free(ptr);
	
	return 0;
}
// 4. Write a program to input and print text using dynamic memory allocation.
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char *str,ch;
	int i,j;
	i = 0,j = 1;
	
	str = (char*)malloc(sizeof(char));
	printf("Enter Any String  : ");
	while(ch!='\n')
	{
		scanf("%c",&ch);
		j++;
		str = (char*)realloc(str,j*sizeof(char));
		str[i] = ch;
		i++;
	}
	 str[i] = '\0';
	 
	printf("The String is %s",str);
	
	free(str);
	return 0;
}
// 5. Write a program to read a one dimensional array, print sum of all elements along with
// inputted array elements using dynamic memory allocation.
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,sum = 0,*ptr;
	
	ptr = (int*)malloc(10*sizeof(int));
//	printf("%d",sizeof(*ptr));
	
	printf("Allocated 10 Variable Using DMA : \n");
	for(i=0;i<10;i++)
	{
		printf("Enter 10 Varible %d:",i+1);
		scanf("%d",&ptr[i]);
	}
	for(i=0;i<10;i++)
	{
		sum = sum + ptr[i];
	}
	printf("The Sum of 10 DMA Variable =  %d",sum);
	
	free(ptr);
	return 0;
}
// 6. Write a program in C to find the largest element using Dynamic Memory Allocation.
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,max =0,*ptr;
	
	ptr = (int*)malloc(10*sizeof(int));
//	printf("%d",sizeof(*ptr));
	
	printf("Allocated 10 Variable Using DMA : \n");
	for(i=0;i<10;i++)
	{
		printf("Enter 10 Varible %d:",i+1);
		scanf("%d",&ptr[i]);
	}	

    for(i=0;i<10;i++)
    {
    	if(*(ptr+i)>max)
    	{
    		max = *(ptr+i);
		}
	}
	printf("The Maximum Variable =  %d",max);
	free(ptr);
	return 0;
}
// 7. Write a program to demonstrate memory leak in C.
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *ptr;
	ptr = (int*)malloc(sizeof(int));
	ptr = NULL //Memory Leak Demonstration :
	return 0;
}
// 8. Write a program to demonstrate dangling pointers in C.
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *ptr;
	ptr = (int*)malloc(sizeof(int));
	*ptr = 45;
	free(ptr);
	
	printf("%d",*ptr); //Dangling Pointer Demonstration :
	return 0;
}
// 9. Write a program to allocate memory dynamically of the size in bytes entered by the
// user. Also handle the case when memory allocation is failed.
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *ptr;
	ptr = (int*)malloc(sizeof(int));
	
	if(ptr==NULL)
	{
		printf("Memory Allocation Failed\n");
		return 0;
	}
	
	return 0;
}
// 10. Find out the maximum and minimum from an array using dynamic memory allocation
// in C.
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,max,min,*ptr;
	
	ptr = (int*)calloc(10,sizeof(int));
//	printf("%d",sizeof(*ptr));
	
	printf("Allocated 10 Variable Using DMA : \n");
	for(i=0;i<10;i++)
	{
		printf("Enter 10 Varible %d:",i+1);
		scanf("%d",&ptr[i]);
	}	
    max = min = ptr[0];
    for(i=0;i<10;i++)
    {
    	if(*(ptr+i)>max)
    	{
    		max = *(ptr+i);
		}
		if(*(ptr+i)<min)
		{
			min = *(ptr+i);
		}
	}
	printf("The Maximum Variable =  %d\n",max);
	printf("The Minimum Variable =  %d\n",min);
	
	free(ptr);
	return 0;
}
