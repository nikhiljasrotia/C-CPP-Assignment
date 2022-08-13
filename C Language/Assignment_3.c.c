//ASSIGNMENT 3
//1. Write a program to check whether a given number is positive or non-positive.
 
#include <stdio.h>
int main()
{
    int num;
    printf("Enter the Number");
    scanf("%d",&num);
    
    if(num>0){
        printf("This is a Positive Number");
    }
    else{
        printf("This is a Non-Positive Number");
    }
    
    return 0;
}
 
//2. Write a program to check whether a given number is divisible by 5 or not 

#include <stdio.h>
int main()
{
    int num;
    printf("Enter the Number");
    scanf("%d",&num);
    
    if(num%5==0){
        printf("This Number is Divisible by 5");
    }
    else{
        printf("This Number isn't Divisible by 5");
    }
    
    return 0;
}

//3. Write a program to check whether a given number is an even number or an odd
//number. 
// 

#include <stdio.h>
int main()
{
    int num;
    printf("Enter the Number");
    scanf("%d",&num);
    
    if(num%2==0){
        printf("This is a Even Number");
    }
    else{
        printf("This is a Odd Number");
    }
    
    return 0;
} 

//4. Write a program to check whether a given number is an even number or an odd
//number without using % operator.
#include <stdio.h>
int main()
{
    int num,temp;
    printf("Enter the Number");
    scanf("%d",&num);
    
    temp = num/2;
    
    if(temp*2==num){
        printf("This is a Even Number");
    }
    else{
        printf("This is a Odd Number");
    }
    
    return 0;
}
// 
// 5.Write a program to check whether a given number is a three-digit number or not. 
 
 #include <stdio.h>
int main()
{
    int num;
    printf("Enter Number");
    scanf("%d",&num);
    
    if(num>99&&num<=999)
    {
        printf("This Number is Three Digit Number");
    }
    else
    {
        printf("This Number isn't Three Digit Number");
    }
    
    return 0;
}
 
 
//6. Write a program to print greater between two numbers. Print one number of both are
//the same. 
 
 #include <stdio.h>
int main()
{
    int a,b;
    printf("Enter the both Number");
    scanf("%d %d",&a,&b);
    
    if(a>b){
        printf("%d is Greater",a);
    }
    else if(a==b){
        printf("Both the Number are some");
    }
    else{
        printf("%d  is Greater ",b);
    }
    
    return 0;
}
 
 
//7. Write a program to check whether roots of a given quadratic equation are real &
//distinct, real & equal or imaginary roots 
// 
 
 #include<stdio.h>
#include<math.h>
int main()
{
   int a, b, c, d;
   int root1, root2, realPart, imaginaryPart;

   printf("Enter cofficients (a, b, and c): ");
   scanf("%d %d %d", &a, &b, &c);

   printf("The quadratic equation: %dx²%+dx%+d \n",a,b,c);
   d = (b*b) - 4*a*c; //discriminant

   if( d>1 )
   {
     root1 = (-b+sqrt(d)) / 2*a;
     root2 = (-b-sqrt(d)) / 2*a;
     printf("Roots are %d and %d\n", root1, root2);
   }
   else if(d==0)
   {
     root1 = root2 = -b/2*a;
     printf("Roots are %d and %d\n", root1, root2);
   }
   else
   {
     realPart = -b/2*a;
     imaginaryPart = sqrt(d)/2*a;
     printf("root1 = %d + i(%d)\n", realPart, imaginaryPart);
     printf("root1 = %d - i(%d)\n", realPart, imaginaryPart);
   }
   return 0;
}

// 
// 8. Write a program to check whether a given year is a leap year or not.
// 
 
#include<stdio.h>
int main()
{
   int years;
   printf("Enter Any Years");
   scanf("%d",&years);
   
   if(years%4==0&&years%100!=0||years%400==0){
       printf("This is Leap Year");
   }
   else{
       printf("This isn't Leap Year");
   }
   return 0;
}
 
// 9. Write a program to find the greatest among three given numbers. Print number once
//if the greatest number appears two or three times.
#include<stdio.h>

int main()
{
   int a,b,c;
   printf("Enter three Number");
   scanf("%d %d %d",&a,&b,&c);
   
   if(a>b){
       if(a>c){
           printf("%d",a);
       }
       else{
           printf("%d",c);
       }
   }
   else{
      if(b>c){
          printf("%d",b);
      }
      else{
          printf("%d",c);
      }
   }
   return 0;
}
 
// 10. Write a program which takes the cost price and selling price of a product from the
//user. Now calculate and print profit or loss percentage.
// 
#include<stdio.h>
int main()
{
  int cp,sp;
  printf("Enter the Cost Price");
  scanf("%d",&cp);
  printf("Enter the Selling Price");
  scanf("%d",&sp);
  
    if(sp>cp){
           int profit;
           profit = sp-cp;
           printf("Profit is %d",profit);
    }
    else if(cp>sp){
       int loss;
       float loss_per;
        loss = cp-sp;
       loss_per = (loss*100)/cp;
       printf("Loss Percentage is %f",loss_per);
   }
  
   return 0;
}


//11. Write a program to take marks of 5 subjects from the user. Assume marks are given
//out of 100 and passing marks is 33. Now display whether the candidate passed the
//examination or failed.


#include <stdio.h>
int main()
{
    int phy,chem,math,bio,eng,total;
    float per;
    printf("Enter the 5 Subject Marks");
    scanf("%d %d %d %d %d",&phy,&chem,&math,&bio,&eng);
    
    total = phy+chem+math+bio+eng;
    per = (total*100)/500;
    
    if(per>=33){
        printf("The Student is Passed");
    }
    else{
        printf("The Student is Failed");
    }
    
    return 0;
}

//12. Write a program to check whether a given alphabet is in uppercase or lowercase.
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a Character");
    scanf("%c",&ch);
    
    if(ch>='A'&&ch<='Z'){
        printf("This is UPPARCASE Alphabet");
    }
    else{
        printf("This is LowerCASe Alphabet");
    }
    return 0;
}

//13. Write a program to check whether a given number is divisible by 3 and divisible by 2.

#include<stdio.h>
int main()
{
    int num;
    printf("Enter Number");
    scanf("%d",&num);
    
    if(num%3==0&&num%7==0){
        printf("This Number is Divisible by 3 and 7");
    }
    else{
        printf("This Number isn't Divisible");
    }
    
    return 0;
}




//14. Write a program to check whether a given number is divisible by 7 or divisible by 3.


#include<stdio.h>
int main()
{
    int num;
    printf("Enter Number");
    scanf("%d",&num);
    
    if(num%3==0||num%7==0){
        printf("This Number is Divisible");
    }
    else{
        printf("This Number isn't Divisible");
    }
    
    return 0;
}


//15. Write a program to check whether a given number is positive, negative or zero.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter Number");
    scanf("%d",&num);
    
    if(num>0){
        printf("Positive Number");
    }
    else if(num==0){
        printf("Zero Number");
    }
    else{
        printf("Negative Number");
    }
    
    return 0;
}





//16. Write a program to check whether a given character is an alphabet (uppercase), an
//alphabet (lower case), a digit or a special character.

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any Character");
    scanf("%c",&ch);
    
    if(ch>='A'&&ch<='Z'){
        printf("This is an UPPARCASE Alphabet");
    }
    else if(ch>='a'&&ch<='z'){
        printf("This is an LOWERCASE Alphabet");
    }
    else if(ch>='0'&&ch<='9'){
        printf("This is a Number Digit");
    }
    else{
        printf("This is Special Character");
    }
    return 0;
}
 
//17. Write a program which takes the length of the sides of a triangle as an input. Display
//whether the triangle is valid or not. 

#include<stdio.h>
int main()
{
    int a,b,c,sum=0;
    printf("Enter the Three Sides of Traingle");
    scanf("%d %d %d",&a,&b,&c);
    
    sum = a+b+c;
    
    if(sum==180){
        printf("This Traingle is Valid");
    }
    else{
        printf("This Triangle isn't Valid");
        
    }
    return 0;
}


//18. Write a program which takes the month number as an input and display number of
//days in that month
#include<stdio.h>
int main()
{
    int month;
    printf("Enter any Month");
    scanf("%d",&month);
    
    if(month==1||month==3||month==5||month==7||month==8||month==10||month==12){
        printf("This Month has 31 Days");
    }
    else if(month==4||month==6||month==9||month==11){
        printf("This Month has 30 Days");
    }
    else if(month == 2){
        printf("This Month has 28 and Sometimes 29 Days");
    }
    else{
        printf("Enter Valid Month");
    }
    return 0;
}