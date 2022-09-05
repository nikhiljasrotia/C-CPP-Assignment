//ASSIGNMENT = 21

///1. Define a structure Employee with member variables id, name, salary

#include <stdio.h>
struct Empolye 
{
    int id ;
    char name[20];
    float sallery;
};
int main()
{
    return 0;
}

//2. Write a function to take input employee data from the user. [ Refer structure from

#include <stdio.h>
struct Empolye 
{
    int id ;
    char name[20];
    int sallery;
};
void input(struct Empolye );
int main()
{
    struct Empolye x;
    input(x);
     
    return 0;
}
void input(struct Empolye a )
{
     printf("Enter Employe ID ");
     scanf("%d",&a.id);

     printf("Enter Empolye Name ");
     fflush stdin;
     fgets(a.name,20,stdin);

     printf("Enter Empolye Sallery ");
     scanf("%d",&a.sallery);

}

//question 1 ]
//3. Write a function to display employee data. [ Refer structure from question 1 ]

#include <stdio.h>
struct Empolye 
{
    int id ;
    char name[20];
    int sallery;
};
struct Empolye input();
void display(struct Empolye a);
int main()
{
    struct Empolye x;
     x = input();
    display(x);
     
    return 0;
}
void display(struct Empolye a)
{
     printf("Empolye ID = %d\nEmpolye Name = %s Empolye Sallery = %d",a.id,a.name,a.sallery);
}
 struct Empolye input()
{
     struct Empolye a;
     printf("Enter Employe ID ");
     scanf("%d",&a.id);

     printf("Enter Empolye Name ");
     fflush stdin;
     fgets(a.name,20,stdin);

     printf("Enter Empolye Sallery ");
     scanf("%d",&a.sallery);

     return a;
}
//4. Write a function to find the highest salary employee from a given array of 10
//employees. [ Refer structure from question 1]
#include <stdio.h>
struct Employee 
{
   int id;
   char name[20];
   int sallery;	
};
struct Employee input();
void display(struct Employee);
int fun(struct Employee [],int);
int main()
{
	int n,i,high;
	printf("How Many Employee Data You Want To Store :");
	scanf("%d",&n);
    struct Employee s[n];
    
    for(i=0;i<n;i++)
     s[i] = input();
     
     high = fun(s,n);
       for( i = 0; i < n; i++ )
   {
           if(s[i].sallery == high)
            printf("Employee ID = %d\nEmploye Name = %sEmploye Sallery = %d", s[i].id, s[i].name, s[i].sallery) ;
    }
    
    return 0;
}
int fun(struct Employee s[],int n)
{
	int i,max;
	max = s[0].sallery;
	for(i=0;i<n;i++)
	{
		if(s[i].sallery > max)
		max = s[i].sallery;
	}
	
	return max;
}
void display(struct Employee s)
{
	printf("\nEmployee ID = %d\nEmployee Name = %sEmploye Sallery = %d\n",s.id,s.name,s.sallery);
}
struct Employee input()
{
	struct Employee s;
	printf("\nEnter Employee ID :");
	scanf("%d",&s.id);
	fflush stdin;
	printf("Enter Employee Name : ");
	fgets(s.name,20,stdin);
	printf("Enter Employee Sallery :");
	scanf("%d",&s.sallery);
	
	return s;
}
//5. Write a function to sort employees according to their salaries [ refer structure from
//question 1]
#include <stdio.h>
struct Empolyee
{
  int id;
  char name[20];
  int sallery;	
};
struct Empolyee input();
void Display(struct Empolyee);
void sort(struct Empolyee [],int);
int main()
{
	struct Empolyee e[5];
	int i;
	
	for(i=0;i<5;i++)
	e[i] = input();
	
	 sort(e,5);
    for(i=0;i<5;i++)
	Display(e[i]);
	
	return 0;
}
struct Empolyee input()
{
	struct Empolyee a;
	printf("\nEnter Empolyee ID : ");
	scanf("%d",&a.id);
	fflush stdin;
	
	printf("Enter Empolyee Name :");
	fgets(a.name,sizeof(a.name),stdin);
	
	printf("Enter Empolyee Sallery :");
	scanf("%d",&a.sallery);
	
	return a;
}
void Display(struct Empolyee a)
{
	printf("\nEmpolyee ID = %d\nEmpolyee Name = %sEmpolyee Sallery = %d\n",a.id,a.name,a.sallery);
}
void sort(struct Empolyee a[],int n)
{
	int i,j;
	struct Empolyee temp;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i].sallery > a[j].sallery)
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}
//6. Write a function to sort employees according to their names [refer structure from
//question 1]
#include <stdio.h>
#include <string.h>
struct Empolyee
{
  int id;
  char name[20];
  int sallery;	
};
struct Empolyee input();
void Display(struct Empolyee);
void sort(struct Empolyee [],int);
int main()
{
	struct Empolyee e[5];
	int i;
	
	for(i=0;i<5;i++)
	e[i] = input();
	
	 sort(e,5);
    for(i=0;i<5;i++)
	Display(e[i]);
	
	return 0;
}
struct Empolyee input()
{
	struct Empolyee a;
	printf("\nEnter Empolyee ID : ");
	scanf("%d",&a.id);
	fflush stdin;
	
	printf("Enter Empolyee Name :");
	fgets(a.name,sizeof(a.name),stdin);
	
	printf("Enter Empolyee Sallery :");
	scanf("%d",&a.sallery);
	
	return a;
}
void Display(struct Empolyee a)
{
	printf("\nEmpolyee ID = %d\nEmpolyee Name = %sEmpolyee Sallery = %d\n",a.id,a.name,a.sallery);
}
void sort(struct Empolyee a[],int n)
{
	int i,j;
	struct Empolyee temp;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(strcmp(a[i].name,a[j].name)>0)
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}
//7. Write a program to calculate the difference between two time periods.
#include <stdio.h>
struct time
{
	int sec;
	int min;
	int hrs;
};
void diff_between_time(struct time ,struct time ,struct time );
int main()
{
    struct time start_time,stop_time,diff;	
    printf("Enter Start Time :\n");
    printf("Enter Hours,Minutes,Second :\n");
    scanf("%d %d %d",&start_time.hrs,&start_time.min,&start_time.sec);
    
    printf("Enter Stop Time :\n");
    printf("Enter Hours,Minutes,Second :\n");
    scanf("%d %d %d ",&stop_time.hrs,&stop_time.min,&stop_time.sec);
    
    diff_between_time(start_time,stop_time,diff);
    
    
    printf("\nTime Diff : %d:%d:%d - ",start_time.hrs,start_time.min,start_time.sec);
    printf("%d:%d:%d ",stop_time.hrs,stop_time.min,stop_time.sec);
    printf("= %d:%d:%d\n",diff.hrs,diff.min,diff.sec);
    
	return 0;
}
void diff_between_time(struct time start,struct time stop,struct time diff)
{
	while(stop.sec > start.sec)
	{
		--start.min;
		start.sec += 60;
	}
	diff.sec = start.sec = stop.sec;
	while(stop.min > start.min)
	{
		--start.hrs;
		start.min += 60;
	}
	diff.min = start.min - stop.min;
	diff.hrs = start.hrs - start.hrs;
}
//8. Write a program to store information of 10 students and display them using structure.
#include <stdio.h>
struct Student
{
	int rollno;
	char name[20];
	float per;
};
struct Student input();
void display(struct Student);
int main()
{
	struct Student s[10];
	int i;
	for(i=0;i<10;i++)
	s[i] = input();
	
	for(i=0;i<10;i++)
	display(s[i]);
	
	return 0;
}
void display(struct Student s)
{
	printf("\nStudent Rollno = %d\nStudent Name = %sStudent Percentage = %f",s.rollno,s.name,s.per);
}
struct Student input()
{
	struct Student s;
	printf("\nEnter Student Rollno : ");
	scanf("%d",&s.rollno);
	
	fflush stdin;
	printf("Enter Student Name : ");
	fgets(s.name,20,stdin);
	
	printf("Enter Student Marks Percentage : ");
	scanf("%f",&s.per);
	
	return s;
}
//9. Write a program to store information of n students and display them using structure
#include <stdio.h>
struct Student
{
	int rollno;
	char name[20];
	float per;
};
struct Student input();
void display(struct Student);
int main()
{
	int n;
	printf("How Many Student You Want To Store :");
	scanf("%d",&n);
	struct Student s[n];
	int i;
	for(i=0;i<n;i++)
	s[i] = input();
	
	for(i=0;i<n;i++)
	display(s[i]);
	
	return 0;
}
void display(struct Student s)
{
	printf("\nStudent Rollno = %d\nStudent Name = %sStudent Percentage = %f\n",s.rollno,s.name,s.per);
}
struct Student input()
{
	struct Student s;
	printf("\nEnter Student Rollno : ");
	scanf("%d",&s.rollno);
	
	fflush stdin;
	printf("Enter Student Name : ");
	fgets(s.name,20,stdin);
	
	printf("Enter Student Marks Percentage : ");
	scanf("%f",&s.per);
	
	return s;
}
//10. Write a program to enter the marks of 5 students in Chemistry, Mathematics and
//Physics (each out of 100) using a structure named Marks having elements roll no.,
//name, chem_marks, maths_marks and phy_marks and then display the percentage
//of each student.
#include <stdio.h>


struct Marks {
    int roll_no;
    char name[30];
    float chem_marks, maths_marks, phy_marks;
};


int main() {
	
    struct Marks marks[5];
    
    for(int i=0; i<4; i++){
		printf("Student %d\n",i+1);
        printf("Enter roll no. :\n");
        scanf("%d", &marks[i].roll_no);
        printf("Enter name :\n");
        scanf("%s",marks[i].name);
        printf("Enter Chemistry marks :\n");
        scanf("%f", &marks[i].chem_marks);
        printf("Enter Maths marks :\n");
        scanf("%f", &marks[i].maths_marks);
        printf("Enter Physics marks :\n");
        scanf("%f", &marks[i].phy_marks);
    }
	for(int i=0; i<4; i++) {
	    printf("Student %d\n",i+1);
	    float percentage = (marks[i].chem_marks + marks[i].maths_marks + marks[i].phy_marks)/300.0*100;
	    printf("Percentage : %f\n", percentage);
	}
  return 0;
}
