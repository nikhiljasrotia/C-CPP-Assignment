/Assignment = 18
//1. Write a function to calculate length of the string
#include <stdio.h>
int Calculate(char []);
int main()
{
    char str[40];
    int length;
    
    printf("Enter String");
    fgets(str,40,stdin);
    
    length = Calculate(str);
    
    printf("The length of String = %d",length);
    
    return 0;
}
int Calculate(char a[])
{
    int i;
    
    for(i=0;i<a[i];i++);
      printf("%d",i);
      
      return i;
}
//2. Write a function to reverse a string.
#include <stdio.h>
void Reverese(char []);
int main()
{
    char str[40];
    
    printf("Enter String");
    fgets(str,40,stdin);
    
     Reverese(str);
     
    return 0;
}
void Reverese(char a[])
{
    int i,n,temp;
    i = n = 0;
    
    while(a[i]!='\0')
    {
        n++;
        i++;
    }
    
    for(i=0;i<n/2;i++)
    {
       temp = a[i];
      a[i] = a[n-1-i];
      a[n-1-i] = temp;
    }
    
    printf("%s",a);
}
//3. Write a function to compare two strings.
#include <stdio.h>
void CompareString(char[],char[]);
int main()
{
    char a[40],b[40];
    
    printf("Enter 1st String");
    fgets(a,40,stdin);
    
    printf("Enter 2nd String");
    fgets(b,40,stdin);
    
    CompareString(a,b);
    
    return 0;
}
void CompareString(char a[],char b[])
{
    int i,flag = 0;
    for(i=0;a[i]!='\0'||b[i]!='\0'; i++)
    {
        if(a[i] != b[i])
        {
            flag = 1;
            break;
        }  
    }
    if(flag == 0)
     printf("This String is Same");
     else
     printf("This String isn't Same");
}
//4. Write a function to transform string into uppercase
#include <stdio.h>
void UpparCase(char []);
int main()
{
    char str[23];
    printf("Enter Any String");
    fgets(str,23,stdin);
    
    UpparCase(str);
    
    return 0;
}
void UpparCase(char s[])
{
    int i;
    
    for(i=0;i<s[i]!='\0';i++)
    {
        if(s[i]>='a'&& s[i]<='z')
         {
             s[i] = s[i] - 32;
         }
    }
    
    printf("%s",s);
}
//5. Write a function to transform a string into lowercase
#include <stdio.h>
void LowerCase(char []);
int main()
{
    char str[23];
    printf("Enter Any String");
    fgets(str,23,stdin);
    
    LowerCase(str);
    
    return 0;
}
void LowerrCase(char s[])
{
    int i;
    
    for(i=0;i<s[i]!='\0';i++)
    {
        if(s[i]>='a'&& s[i]<='z')
         {
             s[i] = s[i] + 32;
         }
    }
    
    printf("%s",s);
}
//6. Write a function to check whether a given string is an alphanumeric string or not.
//(Alphanumeric string must contain at least one alphabet and one digit)
//7. Write a function to check whether a given string is palindrome or not.
#include <stdio.h>
#include <string.h>
int is_palindrome(char []);
int main()
{
	  int result;
 	 char str[20];
 	 printf("Enter String ");
 	 scanf("%s",str);
 	 
	 result =  is_palindrome(str);
	 
	 if(result)
	  printf("Palindrome");
	  else
       printf("Not a Palindrome");
	   	        
	   return 0;
}
int is_palindrome(char s[])
{
	int len = strlen(s);
	int left = 0;
	int right = len - 1;

	while(left < right){
		if(s[left] != s[right])
		   return 0;
		left++;
		right--;
	}
	return 1;
	
}
//8. Write a function to count words in a given string
#include <stdio.h>
int countstr(char []);
int main()
{
	char str[40];
	int len;
	printf("Enter String");
	fgets(str,40,stdin);
	
	 len = countstr(str);
	 
	 printf("In This String has %d words",len);
	 
	 return 0;
}
int countstr(char s[])
{
	int i,count = 0;
	for(i=0;s[i];i++)
	{
		count++;
	}
	
	return count;
	
}
//9. Write a function to reverse a string word wise. (For example if the given string is
//“Mysirg Education Services” then the resulting string should be “Services Education
//Mysirg” )
#include <stdio.h>
#include <string.h>
void ChangingString(char []);
int main()
{
	char str[30]= "Services Education Mysirg ";
     ChangingString(str); 
	return 0;
}
void ChangingString(char s[])
{
	int i,j,len,startIndex,endIndex;
	len = strlen(s);
  	endIndex = len - 1;
	for(i = len - 1; i >= 0; i--)
	{
		if(s[i] == ' ' || i == 0)
		{
			if(i == 0)
			{
				startIndex = 0;
			}
			else
			{
				startIndex = i + 1;
			}
			for(j = startIndex; j <= endIndex; j++)
			{
				printf("%c", s[j]);
			}
			endIndex = i - 1;
			printf(" ");				
		} 
	}
}
//10. Write a function to find the repeated character in a given string.
#include <stdio.h>
void CountingRepeatString(char []);
int main()
{
	char str[40];
	printf("Enter Any String");
	fgets(str,40,stdin);
	
	CountingRepeatString(str);
	
	return 0;
}
void CountingRepeatString(char s[])
{
	int i,j,count,b = 0;
	
	for(i=0;i<s[i]!='\0';i++)
	{
		count = 0;
		for(j=0;j<s[i]!='\0';j++)
		{
			if(s[i] == s[j])
			{
				count++;
			}
		}
		if(count>=2&&s[i]!=b)
		{
			b = s[i];
			printf("%c = %d\n",s[i],count);
		}
	}
}