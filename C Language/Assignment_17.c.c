//Assignment = 17
//1. Write a program to calculate the length of the string. (without using built-in method)
#include <stdio.h>
int main()
{
	char str[20];
	int i =0,count=0;
     printf("Enter any Name");
      fgets(str,20,stdin);
     
     while(str[i]!='\0')
     {
     	count++;
     	i++;
	 }
	  printf("Length [%s]=[%d]\n", str, count);
     
    return 0;
}
//2. Write a program to count the occurrence of a given character in a given string.
#include <stdio.h>
int main()
{
   char ch[50],key;
   int i,count = 0;
   
    printf("Enter String");
	fgets(ch,50,stdin);
		 
	printf("Enter the Character U find frequency ")	;
	scanf("%c",&key);
	
	
	 for(i=0;ch[i];i++)
	 {
	 	if(ch[i] == key)
	 	{
	 		count++;
		 }
	 	 
	 }
	 printf("\nFrequency of %c = %d ",key,count);
	 
    return 0;
}
//3. Write a program to count vowels in a given string
#include <stdio.h>
int main()
{
   char ch[50],vow[] = "aeiouAEIOU";
   int i,j,count = 0;
    printf("Enter String");
	fgets(ch,50,stdin);
	
	for(i=0;i<ch[i];i++)
	{
	   for(j=0;j<vow[j];j++)
	   {
	       ch[i] == vow[j];
	       count++;
	       break;
	   }
	}
	
	printf("Total Vowels in %s = %d",ch,count);
		  
    return 0;
}
//4. Write a program to convert a given string into uppercase
include <stdio.h>
int main()
{
    char str[30];
    int i;
    printf("Enter String");
    fgets(str,30,stdin);
    
    for(i=0;i<str[i];i++)
    {
        if(str[i]>='a'&& str[i]<='z')
         {
             str[i] = str[i] - 32;
         }
    }
    
    printf("%s",str);
    return 0;
}

//5. Write a program to convert a given string into lowercase
#include <stdio.h>
int main()
{
    char str[30];
    int i;
    printf("Enter String");
    fgets(str,30,stdin);
    
    for(i=0;i<str[i];i++)
    {
        if(str[i]>='A'&& str[i]<='Z')
         {
             str[i] = str[i] + 32;
         }
    }
    
    printf("%s",str);
    return 0;
}
//6. Write a program to reverse a string.
#include <stdio.h>
int main()
{
    char str[30];
    int i,j,count = 0,temp;
    printf("Enter String");
    fgets(str,30,stdin);
    
    i = 0;
    while(str[i]!='\0')
    {
        count++;
        i++;
    }
    for(i=0;i<count/2;i++)
    {
      temp = str[i];
      str[i] = str[count-1-i];
      str[count-1-i] = temp;
    }
    
    printf("Reverse String = %s",str);
    return 0;
}
//7. Write a program in C to count the total number of alphabets, digits and special
//characters in a string.
#include <stdio.h>
int main()
{
    char str[30];
    int a,d,s,i=0;
    a = d = s = 0;
    printf("Enter String");
    fgets(str,30,stdin);
    
    while(str[i])
    {
        if((str[i]>='A'&& str[i]<='Z')||(str[i]>='a'&&str[i]<='z'))
         {
             a++;
         }
         else if(str[i]>='0'&&str[i]<='9')
         {
             d++;
         }
         else
         {
             s++;
         }
         i++;
    }
    printf("\nThe Alphabet %d",a);
    printf("\nThe Digit in %d",d);
    printf("\nThe Special Digit in %d",s);
    
    
    return 0;
}
//8. Write a program in C to copy one string to another string.
#include <stdio.h>
#include <string.h>
int main()
{
    char a[20],b[20];
    int i;
    
    printf("Enter String\n");
    fgets(a,20,stdin);
    
    for(i=0;i<a[i];i++)
    {
        b[i] = a[i];
    }
    b[i] = '\0';
    
    printf(" Copied String = %s",b);
    return 0;
}
//9. Write a C program to sort a string array in ascending order.
#include <stdio.h>
int main()
{
    char a[20],temp;
    int i,j,len = 0;
    
    printf("Enter String\n");
    fgets(a,20,stdin);
    
    i = 0;
    while(a[i])
    {
        len++;
        i++;
    }
    
    for(i=0; i<len - 1;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("%s",a);
    return 0;
}
//10. Write a program in C to Find the Frequency of Characters.
#include <stdio.h>
int main()
{
	char str[100],c;
	int i,count = 0 ;
	
	printf("Enter String");
	fgets(str,100,stdin);
	
	for(c='a';c<='z';c++)
	{
	    for(i=0;i<str[i];i++)
		{
			if(c==str[i])
			{
				count++;
			}
		}
		if(count>2)
		printf("%c found in %d Times\n",c,count );
	}
    return 0;         
}