//Assignment - 2

//1. Write a program to print unit digit of a given number
#include <stdio.h>
int main()
{
	int num,rem;
	printf("Enter the Number");
	scanf("%d",&num);
	rem = num%10;
	
	printf("The Unit Digit is %d",rem);
	
	return 0;
}

// 2. Write a program to print a given number without its last digit.
#include <stdio.h>
int main()
{
    int num,rem;
    printf("Enter the Number");
    scanf("%d",&num);
    
    rem = num/10;
    
    printf("The Given Number of Without Last Digit is %d",rem);
    
    return 0;
}

// 3. Write a program to swap values of two int variables
#include <stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter the A Value");
    scanf("%d",&a);
    printf("Enter the B Value");
    scanf("%d",&b);
    
    temp = a;
    a = b;
    b = temp;
    
    printf("a = %d,b = %d",a,b);
    return 0;
}

//4. Write a program to swap values of two int variables without using a third variable.
#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter the A Value");
    scanf("%d",&a);
    printf("Enter the B Value");
    scanf("%d",&b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("a = %d,b = %d",a,b);
    return 0;
}



//5. Write a program to input a three-digit number and display the sum of the digits.
#include <stdio.h>
int main()
{
     int num,rem,n,sum=0;
     printf("Enter Three Digit Number");
     scanf("%d",&num);
     
     rem = num%10;
     n = num/10;
     sum = sum + rem;
     
     rem = n%10;
     n = n/10;
     sum = sum + rem;
     
     rem = n%10;
     n = n/10;
     sum = sum + rem;
     
     
     printf("The Sum of Three Digit Number is %d ",sum);
    return 0;
}

//6. Write a program which takes a character as an input and displays its ASCII code.
#include <stdio.h>
int main()
{
  char ch;
  printf("Enter Any Character");
  scanf("%c",&ch);
  
  printf(" The ASCII Code Character is %d",ch);
  
  return 0;
}

//7. Write a program to find the position of first 1 in LSB.

#include <stdio.h>

int main()
{
    int num;

    printf("Enter any number: ");
    scanf("%d", &num);


    if(num & 1)
        printf("LSB of %d is set (1).", num);
    else
        printf("LSB of %d is unset (0).", num);

    return 0;
}



//8. Write a program to check whether the given number is even or odd using a bitwise operator.

#include <stdio.h>
int main()
{
    int num;
    printf("Enter Number");
    scanf("%d",&num);
    
    if(num & 1)
    {
        printf("This is Odd Number");
    }
    else
    {
        printf("This is Even Number");
    }
    
    return 0;
}




//9. Write a program to print size of an int, a float, a char and a double type variable
#include <stdio.h>
int main()
{
    int n;
    char ch;
    float k;
    double di;
    
    printf("%d\n",sizeof(n));
    printf("%d\n",sizeof(ch));
    printf("%d\n",sizeof(k));
    printf("%d\n",sizeof(di));
    
    return 0;
}


//10. Write a program to make the last digit of a number stored in a variable as zero.
//(Example - if x=2345 then make it x=2340)

#include <stdio.h>
int main()
{
     int x,n,first,second,third,fourth,digit;
     printf("Enter Number");
     scanf("%d",&x);
     
     n = x/1000;
     first = n;
     
     n = x/100;
     n = n%10;
     second = n;
     
     n = x/10;
     n = n%10;
     third = n;
     
     fourth = x%10;
     fourth = 0;
     
     digit = (first*1000+second*100+third*10+fourth*1);
     printf(" x = %d",digit);
     
     return 0;
}

//11. Write a program to input a number from the user and also input a digit. Append a
//digit in the number and print the resulting number. (Example - number=234 and
//digit=9 then the resulting number is 2349)
//

#include <stdio.h>
int main()
{
    int num,digit;
    printf("Enter the Number");
    scanf("%d",&num);
    printf("Enter the Digit");
    scanf("%d",&digit);
    
    printf("%d%d",num,digit);
    
    return 0;
}

//12. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and
//convert it into USD.

#include <stdio.h>
int main()
{
   float INR, USD;
   printf("Enter the INR Ruppes");
   scanf("%f",&INR);
   
   USD = INR/76.23;
   
   printf("The USD is %f",USD);
   
    return 0;
}
 
//13 Write a program to take a three-digit number from the user and rotate its digits by
//one position towards the right.
// 
#include <stdio.h>
int main()
{
   int num,rem,reverse = 0;
   printf("Enter the three Number");
   scanf("%d",&num);
   
   rem = num%10;
   num = num/10;
   reverse = reverse + rem * 100;
   
   rem = num%10;
   num = num/10;
   reverse = reverse + rem * 10;
   
   rem = num%10;
   num = num/10;
   reverse = reverse + rem * 1;
   
   printf("The Rotate Digit is %d",reverse);
   
   return 0;
}