#include <stdio.h>
#include <conio.h>
int main()
{
    float R,A;
    printf("Enter The Value of Radius");
    scanf("%f",&R);

    A = 3.14 * R * R ;

    printf("Area of Circle is %f having the radius is %f",A,R);
    getch();
}
