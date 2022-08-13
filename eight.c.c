//ASSIGNMENT = 8

//Ans1.

 #include <stdio.h>
int main()
{
   int i,j;
   for(i=1;i<=5;i++)
   {
       for(j=1;j<=5;j++)
       {
           if(j<=i)
           {
               printf("*");
           }
           else
           {
               printf(" ");
           }
       }
         printf("\n");
   }
   
    return 0;
}

//Ans2.

#include <stdio.h>
int main()
{
   int i,j;
   for(i=1;i<=5;i++)
   {
       for(j=1;j<=5;j++)
       {
           if(j>=6-i)
           {
               printf("*");
           }
           else
           {
               printf(" ");
           }
       }
         printf("\n");
   }
   
    return 0;
}

//Ans3

#include <stdio.h>
int main()
{
   int i,j;
   for(i=1;i<=5;i++)
   {
       for(j=1;j<=5;j++)
       {
           if(j<=6-i)
           {
               printf("*");
           }
           else
           {
               printf(" ");
           }
       }
         printf("\n");
   }
   
    return 0;
}

//Ans4

#include <stdio.h>
int main()
{
   int i,j;
   for(i=1;i<=5;i++)
   {
       for(j=1;j<=5;j++)
       {
           if(j>=i)
           {
               printf("*");
           }
           else
           {
               printf(" ");
           }
       }
         printf("\n");
   }
   
    return 0;
}

//Ans 5.

#include <stdio.h>
int main()
{
   int i,j;
   for(i=1;i<=5;i++)
   {
       for(j=1;j<=9;j++)
       {
           if(j>=6-i&&j<=4+i)
           {
               printf("*");
           }
           else
           {
               printf(" ");
           }
       }
         printf("\n");
   }
   
    return 0;
}


//Ans 6


#include <stdio.h>
int main()
{
   int i,j;
   for(i=1;i<=5;i++)
   {
       for(j=1;j<=9;j++)
       {
           if(j>=i&&j<=10-i)
           {
               printf("*");
           }
           else
           {
               printf(" ");
           }
       }
         printf("\n");
   }
   
    return 0;
}

//Ans 7.

#include <stdio.h>
int main()
{
   int i,j;
   for(i=1;i<=5;i++)
   {
       for(j=1;j<=9;j++)
       {
           if(j<=6-i||j>=4+i)
           {
               printf("*");
           }
           else
           {
               printf(" ");
           }
       }
         printf("\n");
   }
   
    return 0;
}


//Ans 8

#include <stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        k = 1;
        for(j=1;j<=7;j++)
        {
            if(j>=5-i&&j<=3+i)
            {
                printf("%d",k);
                j<4?k++:k--;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0 ;
}

//Ans 9

#include <stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        k = 1;
        for(j=1;j<=7;j++)
        {
            if(j>=i&&j<=8-i)
            {
                printf("%d",k);
                j<4?k++:k--;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0 ;
}




//ANs 10.

#include <stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        k = 1;
        for(j=1;j<=7;j++)
        {
            if(j<=5-i||j>=3+i)
            {
                printf("%d",k);
                j<4?k++:k--;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0 ;
}


//ANs 11



#include <stdio.h>
int main()
{
    int i,j;
    char k;
    for(i=1;i<=5;i++)
    {
        k = 'A' ;
        for(j=1;j<=9;j++)
        {
            if(j>=6-i&&j<=4+i)
            {
                printf(" %c",k);
                j<5?k++:k--;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0 ;
}


//Ans 12

#include <stdio.h>
int main()
{
    int i,j;
    char k;
    for(i=1;i<=4;i++)
    {
        k = 'A';
        for(j=1;j<=7;j++)
        {
            if(j>=i&&j<=8-i)
            {
                printf("%c",k);
                j<4?k++:k--;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0 ;
}


//Ans 13


#include <stdio.h>
int main()
{
    int i,j;
    char k;
    for(i=1;i<=7;i++)
    {
        k = 'A';
        for(j=1;j<=13;j++)
        {
            if(j<=8-i||j>=6+i)
            {
                printf("%c",k);
                j<7?k++:k--;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0 ;
}


//ans 14

#include <stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j==1||j==i||i==5)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}



//ANs 15


#include <stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j==6-i||j==5||i==5)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}


//ANs 16

#include <stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(j==6-i||j==4+i||i==5)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}


//ANs 17

#include <stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(j==i||j==10-i||i==1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}

//Ans 18



#include <stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=9;i++)
    {
        i<5?k++:k--;
        for(j=1;j<=9;j++)
        {
            if(j>=6-k&&j<=4+k)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}



//ans 19

#include <stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=19;j++)
        {
            if((j>=4-i&&j<=6+i)||(j>=14-i&&j<=16+i))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=19;j++)
        {
            if((i==1)&&(j==7))
            {
                printf("MySirG");
            }
            if((i==1)&&(j>=7)&&(j<=12))
            {
                continue;
            }
            if(j>=i&&j<=20-i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}
