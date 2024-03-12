#include<stdio.h>
struct Employee
{
     char fname[20];
     char lname[20];
     double sal;

};
void emp_init(struct Employee* e);
void set_salary(struct Employee *e,double sal);
void emp_display(struct Employee *e);


int main()
{
    double inc;
    struct Employee e;
    emp_init(&e);
    inc=e.sal+(e.sal*0.1);
    set_salary(&e,inc);
    emp_display(&e);
   

    return 0;
}
void emp_init(struct Employee* e)
{
    printf("Enter first Name\n");
    scanf("%s",&e->fname);
    printf("Enter last Name\n");
    scanf("%s",&e->lname);
    printf("Enter Salary: \n");
    scanf("%lf",&e->sal);
}

void set_salary(struct Employee*e, double inc)
{

    e->sal=(inc*12);
   // printf("%lf\n",e->sal);
    
}

void emp_display(struct Employee * e)
{
    printf("first name of Employee is: %s\n",e->fname);
    printf("last name of Employee is: %s\n",e->lname);
    printf("Annual Salary is %lf\n",e->sal);
}