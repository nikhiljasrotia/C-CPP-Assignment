//Assignment = 19
//1. Write a program to find the number of vowels in each of the 5 strings stored in two
//dimensional arrays, taken from the user.
#include <stdio.h>
#include <string.h>
int main()
{
	char str[5][20];
	int i,j,vowel = 0;
	
	for(i=0;i<5;i++)
	{
		printf("Enter %d String :",i);
		gets(str[i]);
	}
	
	for(i=0;i<5;i++)
	{
		for(j=0;str[i][j]!='\0';j++)
		{
		if(str[i][j]=='a'||str[i][j]=='e'||str[i][j]=='i'||str[i][j]=='o'||str[i][j]=='u'||str[i][j]=='A'||str[i][j]=='E'||str[i][j]=='I'||str[i][j]== 'O'||str[i][j]== 'U')
			vowel++;
		}
		printf("%s = %d\n",str[i],vowel);
		vowel = 0;
	}
	
	return 0;
	
}
//2. Write a program to sort 10 city names stored in two dimensional arrays, taken from
//the user.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[10][100],temp[20];
    int i,j,len;
    printf("Enter the 10 Cities Name : ");
    for(i=0;i<10;i++)
      {
         scanf("%s",str[i]);
      }
    
     for(i=0;i<10-1;i++)
     {
     	for(j=i+1;j<10;j++)
     	{
     		if(strcmpi(str[i],str[j])>0)
     		 {
     		 	strcpy(temp,str[i]);
     		 	strcpy(str[i],str[j]);
     		 	strcpy(str[j],temp);
			  }
		 }
	 }
	 for(i=0;i<10;i++)
	    printf(" %d:%s\n",i+1,str[i]);
    
    return 0;
}
//3. Write a program to read and display a 2D array of strings in C language.

#include <stdio.h>
#include <string.h>
int main()
{
    char str[5][10];
    
    int i,j;
    printf("Enter the String : ");
    for(i=0;i<5;i++)
      {
          scanf("%s",str[i]);
      }
    
    for(i=0;i<5;i++)
    {
        printf("%s\n",str[i]);
    }
    
    return 0;
}

//4. Write a program to search a string in the list of strings.
#include <stdio.h>
#include <string.h>
int main()
{
   char str[5][20],ch[10];
   int i;
   
   for(i=0;i<5;i++)
   {
   	  printf("Enter String List %d:",i);
   	  gets(str[i]);
   }
   printf("---------------------------------");
   printf("\n\nEnter String You Want To Search : ");
   gets(ch);
   
   for(i=0;i<5;i++)
   {
   	 if(strcmp(str[i],ch)==0)
   	 {
   	 	printf("Found");
   	 	break;
		}
   }
   if(i==5)
     printf("Not Found");

   return 0;
}
//5. Suppose we have a list of email addresses, check whether all email addresses have
//�@� in it. Print the odd email out.
#include <stdio.h>
#include<string.h>
int main()
{
    char email[5][50] = {"ABC@gmail.com","XYZ@gmail.com","123gmail.com","WWWgmail.com","NNNNgmail.com"};
    int i;
    for(i=0;i<5;i++)
    {
        if(strchr(email[i],'@')==0)
         printf("%s\n",email[i]);
    }
    return 0;
}
//6. Write a program to print the strings which are palindrome in the list of strings.
#include <stdio.h>
int Length(char*);
int main()
{
    char str[5][20];
    int i,j,n,flag = 0,r;
    for(i=0;i<5;i++)
    {
        printf("Enter String :[%d]-",i+1);
        fgets(str[i],20,stdin);
        n = Length(str[i]);
        n = n - 1;
        for(j=0;j<n;j++)
        {
            if(str[i][j]!=str[i][n-j-1])
            {
                flag = 0;
                break;
            }
            else
            {
                flag = 1;
                continue;
            }
        }
        if(flag == 1)
        {
            printf("%s",str[i]);
            flag = 0;
            r = 1;
        }
        n = 0;
    }
    if(flag == 0&&r!=1)
    {
        printf("No palindrome found in the list of the strings.");
    }
     return 0;
}
int Length(char*ptr)
{
    int i,len;
    i = len= 0;
    while(ptr[i])
    {
        len++;
        i++;
    }
    return len;
}
//7. From the list of IP addresses, check whether all ip addresses are valid.
#include <stdio.h>
#include <string.h>
int main()
{
  char ip[] = "123.23.34.12.1";
  int i ,count = 0;
  for(i=0;i<ip[i]!='\0';i++)
  {
    if(ip[i] == '.' )
    {
      count++;
    }
  }
  if(count==3)
  {
  char  *res = strtok(ip,".");

  while(res!=NULL)
  {
       int x = atoi(res);
      if((x>=0)&&x<=255)
       {
        printf("%d ",x);
       }
       res = strtok(NULL,".");
  }
  }
  else{
    printf("Valid IP ADDRESSS");
  }
  return 0;
}
//8. Given a list of words followed by two words, the task is to find the minimum distance
//between the given two words in the list of words.
//(Example : s = {�the�,�quick�,�brown�,�fox�,�quick�}
//word1 = �the�, word2 = �fox�, OUTPUT : 1 )
#include <stdio.h>
#include <string.h>
int main()
{
    char str[5][20] = {"the","quick","brown","fox","quick"};
    char word1[] = "the";
    char word2[] = "fox";
    int i,w1,w2,min,temp;
    w1 = -1;
    w2 = -1;
    min = 10000;

    for(i=0;i<5;i++)
    {
        if((strcmp(str[i],word1))== 0)
        {
            w1 = i;
        }
        if((strcmp(str[i],word2))== 0)
        {
            w2 = i;
        }
        if(w1!=-1&&w2!=-1)
        {
            temp = abs(w2-w1);
            if(temp<min)
             min = temp;
        }
    }
    printf("%d ",min-1);
    
    return 0;
}
//9. Write a program that asks the user to enter a username. If the username entered is
//one of the names in the list then the user is allowed to calculate the factorial of a
//number. Otherwise, an error message is displayed
#include <stdio.h>
#include <stdlib.h>
int Fact();
int main()
{
    char Str[][20] = {"Nikhil","Sarah","Zoha","Zain","Taniya"};
    char name[10];
    int i,j,count = 0,k = 0;
    printf("Enter UserName : - ");
    fgets(name,20,stdin);
    for(i=0;i<5;i++)
    {
        for(j=0;j<Str[i][j]!='\0';j++)
        {
            if(Str[i][j]==name[j])
            {
                count = 1;
                continue;
            }
            else
            {
               count = 0;
               break;
            }
        }
        if(count == 1)
        {
            Fact();
            exit(0);
        }
    }
    if (i == 5)
    {
        printf("Please try to login with correct credentials!!\n");
        exit(0);
    }

    return 0;
}
int Fact()
{
    int num;
    printf("Enter the Number:");
    scanf("%d",&num);
    int i,f = 1;
    for(i = num;i>=1;i--)
    {
        f = f * i;
    }
    return printf("Factorial of %d is %d:",num,f);
}
//10. Create an authentication system. It should be menu driven.
#include <stdio.h>
#include <string.h>
int main()
{
   char Details[3][2][20] = {{"Nikhil","123"},{"Anshul","121"},"Rohan das","345"};
   char username[] = "Nikhil";
   char password[] = "123";
   int i,flag = 0;

   for(i=0;i<3;i++)
   {
         if(strcmp(username,Details[i][0]) == 0 && strcmp(password,Details[i][1])== 0)
         {
                flag = 1;
                printf("Username and Password are Matching :");
         }
   }
   if(flag == 0)
   printf("Username and Password aren't Matching :");

  return 0;
}
