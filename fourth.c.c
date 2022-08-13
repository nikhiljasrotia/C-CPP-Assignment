//ASSIGNMENT 4
//1. Write a program to print MySirG 5 times on the screen
#include<stdio.h>
int main()
{
    int i = 1;
    while(i<=5){
        printf("MYSIRG\n");
        i++;
    }
    return 0;
}

//2. Write a program to print the first 10 natural numbers.
#include<stdio.h>
int main()
{
    int i = 1;
    while(i<=10){
        printf("%d\n",i);
        i++;
    }
    return 0;
}

//3. Write a program to print the first 10 natural numbers in reverse order
#include<stdio.h>
int main()
{
    int i = 10;
    while(i>=1){
        printf("%d\n",i);
        i--;
    }
    return 0;
}

//4. Write a program to print the first 10 odd natural numbers
#include<stdio.h>
int main()
{
    int i = 1;
    while(i<=20){
        if(i%2!=0){
            printf("%d ",i);
        }
        i++;
    }
    return 0;
}


//5. Write a program to print the first 10 odd natural numbers in reverse order.
#include<stdio.h>
int main()
{
    int i = 20;
    while(i>=1){
        if(i%2!=0){
            printf("%d ",i);
        }
        i--;
    }
    return 0;
}

//6. Write a program to print the first 10 even natural numbers
#include<stdio.h>
int main()
{
    int i = 1;
    while(i<=20){
        if(i%2==0){
            printf("%d ",i);
        }
        i++;
    }
    return 0;
}


//7. Write a program to print the first 10 even natural numbers in reverse order

#include<stdio.h>
int main()
{
    int i = 20;
    while(i>=1){
        if(i%2==0){
            printf("%d ",i);
        }
        i--;
    }
    return 0;
}

//8. Write a program to print squares of the first 10 natural numbers

#include<stdio.h>
int main()
{
    int i = 1;
    while(i<=10){
            printf("%d ",i*i);
        i++;
    }
    return 0;
}

//9. Write a program to print cubes of the first 10 natural numbers
#include<stdio.h>
int main()
{
    int i = 1;
    while(i<=10){
            printf("%d ",i*i*i);
        i++;
    }
    return 0;
}

//10. Write a program to print a table of 5.
#include<stdio.h>
int main()
{
    int i = 1,k;
    while(i<=10){
          k = 5;
            printf("5 x %d = %d\n",i,k*i);
        i++;
    }
    return 0;
}