//ASSIGNMENT = 9

//1. Write a program which takes the month number as an input and display
//number of days in that month.

#include <stdio.h>
int main()
{
    int month;
    printf("Enter Month");
    scanf("%d",&month);
    
    switch(month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        printf("In This Month has 31 Days");
        break;
        
        case 4:
        case 6:
        case 9:
        case 11:
        printf("In This Month has 30 days");
        break;
        
        case 2:
        printf("In This Month 28 days and Sometimes 29 days");
        break;
        
        default:
        printf("Enter Valid Month");
    }
    
    return 0;
}
//2. Write a menu driven program with the following options:
//a. Addition
//b. Subtraction
//c. Multiplication
//d. Division
//e. Exit

#include <stdio.h>
#include <stdlib.h>
int main()
{
    while(1)
    {
    int choice,a,b,c;
    printf(" 1. for Addition\n");
    printf(" 2. for Subtraction\n");
    printf(" 3. for Multiplication\n");
    printf(" 4. for Divide\n");
    printf(" 5. for Exit\n\n");
    
    printf("Enter Your Choice");
    scanf("%d",&choice);
    
    switch(choice)
    {
        case 1:
          printf("Enter Two Number");
          scanf("%d %d",&a,&b);
          c = a + b;
          printf("The Sum is %d",c);
          break;
          
          case 2:
          printf("Enter Two Number");
          scanf("%d %d",&a,&b);
          c = a - b;
          printf("The Difference is %d",c);
          break;
          
          case 3:
          printf("Enter Two Number");
          scanf("%d %d",&a,&b);
          c = a * b;
          printf("The Multiplication is %d",c);
          break; 
          
          case 4:
          printf("Enter Two Number");
          scanf("%d %d",&a,&b);
          c = a / b;
          printf("The Dividision is %d",c);
          break;
          
          case 5:
          exit(0);
    }   
    }
    return 0;
}

//3. Write a program which takes the day number of a week and displays a
//unique greeting message for the day.

#include <stdio.h>
int main()
{
    int days;
    printf("Enter days");
    scanf("%d",&days);
    
    switch(days)
    {
        case 1:
        printf("Monday");
        break;
        
        case 2:
        printf("Tuesday");
        break;
        
        case 3:
        printf("Wednesday");
        break;
        
        case 4:
        printf("Thursday");
        break;
        
        case 5:
        printf("Friday");
        break;
       
        case 6:
        printf("Saturday");
        break;
        
        case 7:
        printf("Sunday");
        break;  
        
        default:
        printf("Enter Valid Days");
    }
    
    return 0;
}
//4. Write a menu driven program with the following options:
//a. Check whether a given set of three numbers are lengths of an
//isosceles triangle or not
//b. Check whether a given set of three numbers are lengths of sides of
//a right angled triangle or not
//c. Check whether a given set of three numbers are equilateral triangle
//or not
//d. Exit

#include <stdio.h>
#include <stdlib.h>
int main()
{
    while(1)
    {
     int choice,a,b,c;
    printf(" 1.  To Check for Isocleses Triangle\n");
    printf(" 2. To Check for Right Angle Triangle\n");
    printf(" 3. To Check for Equlateral Triangle\n");
    printf(" 4. To Exit");
    
    printf("\nEnter Your Choice");
    scanf("%d",&choice);
    
    switch(choice)
    {
        case 1:
        printf("Enter Three Sides of Triangle");
        scanf("%d %d %d",&a,&b,&c);
        if(a==b ||b == c||c == a)         
        {
            printf("This Triangle is Isocleses");
        }
        else
        {
            printf("This isn't Triangle isn't Isocleses");
        }
          break;
          
        case 2:
        printf("Enter Three Sides of Triangle");
        scanf("%d %d %d",&a,&b,&c);
        if(a*a + b*b == c*c|| c*c + a*a == b*b || c*c + b*b == a*a )         
        {
            printf("This Triangle is Right Angle Triangle");
        }
        else
        {
            printf("This isn't Triangle isn't Right Angle Triangle");
        }
          break;
          
        case 3:
        printf("Enter Three Sides of Triangle");
        scanf("%d %d %d",&a,&b,&c);
         if(a==b && b == c)         
        {
            printf("This Triangle is Equlateral");
        }
        else
        {
            printf("This isn't Triangle isn't Equlateral");
        }
          break; 
        
        case 4:
        exit(0);
    }
       
    }
    return 0;
}
//5. Convert the following if-else-if construct into switch case:
//if(var == 1)
//System.out.println("good");
//else if(var == 2)
//System.out.println("better");
//else if(var == 3)
//System.out.println("best");
//else
//System.out.println("invalid");
//

#include <stdio.h>
int main()
{
  int n;  
  printf("Enter Number");
  scanf("%d",&n);
  
  switch(n)
  {
      case 1:
      printf("Good");
      break;
      
      case 2:
      printf("Better");
      break;
      
      case 3:
      printf("Best");
      break;
      
      default:
      printf("Invalid");
  }
  return 0;
}
//6. Program to check whether a year is a leap year or not. Using switch
//statement
//

#include <stdio.h>
int main()
{
  int year, x;  
  printf("Enter Year");
  scanf("%d",&year);
  
  x =   year%4==0 && year%100!=0 || year%400==0;
  switch(year)
  {
      case 1:
            printf("\n%d is the leap year.\n",year);
            break;

      case 0:
            printf("\n%d is not the leap year.\n", year);
            break;

      default:
            printf("\n%d is not the leap year.\n", year);
  }
  return 0;
}

//7. Program to take the value from the user as input electricity unit charges
//and calculate total electricity bill according to the given condition . Using
//the switch statement.
//For the first 50 units Rs. 0.50/unit
//For the next 100 units Rs. 0.75/unit
//For the next 100 units Rs. 1.20/unit
//For units above 250 Rs. 1.50/unit
//An additional surcharge of 20% is added to the bill.

#include <stdio.h>
int main()
{
  int x;
  float k;
  printf("Enter Electricity");
  scanf("%d",&x);
  
  switch(x)
  {
      case 1 ... 50:
      k = x * 0.25;
      printf("The Electricity bill is %f",k);
      break;
      
      case 51 ... 100:
      k = x * 0.75;
      printf("The Electricity bill is %f",k);
      break;
      
      case 101 ... 200:
      k = x * 1.20;
      printf("The Electricity bill is %f",k);
      break;
      
      case 250 ... 1000:
      k = x * 20/100* 1.50;
      printf("The Electricity bill is %f",k);
      break;
  }
  
  return 0;
}
//8. Program to convert a positive number into a negative number and negative
//number into a positive number using a switch statement.

#include <stdio.h>
int main()
{
   int n,choice;
   printf("1. Select for Negative to positive\n");
   printf("2. Select for Positive to negative\n");

   printf("Enter Your Choice");
   scanf("%d",&choice);
   
   switch(choice)
   {
       case 1:
       printf("Enter Negative Number");
       scanf("%d",&n);
       n = n*(-1);
       printf("The Postive form of Number is %d",n);
       break;
       
       case 2:
       printf("Enter Postive Number");
       scanf("%d",&n);
       n = n*(-1);
       printf("The Negative form of Number is %d",n);
       break;
   }
   
   return 0;
}

//9. Program to Convert even number into its upper nearest odd number
//Switch Statement.
#include <stdio.h>
int main()
{
   int n;
   printf("Enter Number");
   scanf("%d",&n);
   
   switch(n%2==0)
   {
       case 1:
       n = n + 1;
       printf(" odd number into its nearest even is %d",n);
       break;
       
       case 0:
       n = n + 1;
       printf(" Even number into its nearest odd is %d",n);
       break;
   }
   
   return 0;
}

//10. C program to find all roots of a quadratic equation using switch case
#include <stdio.h>


int main()
{
    float a, b, c,d;
    printf("Enter values of a, b, c");
    scanf("%f%f%f", &a, &b, &c);

    d = (b * b) - (4 * a * c);
    switch(d > 0)
    {
        case 1:
            printf("Two distinct and real roots exists");
            break;

        case 0:
            switch(d < 0)
            {
                case 1:
                    printf("Two distinct complex roots exists");
                    break;
                    
                    case 0:

                    printf("Two equal and real roots exists");

                    break;
            }
    }

    return 0;
}