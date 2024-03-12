#include<stdio.h>

int main(void)
{
    int sub1;
    int sub2;
    int sub3;
    int sub4;
    int sub5;
    int total;
    char grade;
    printf("Enter Marks in subject 1\n:");
    scanf("%d",&sub1);
     printf("Enter Marks in subject 2\n:");
    scanf("%d",&sub2);
     printf("Enter Marks in subject 3\n:");
    scanf("%d",&sub3);
     printf("Enter Marks in subject 4\n:");
    scanf("%d",&sub4);
     printf("Enter Marks in subject 5\n:");
    scanf("%d",&sub5);
    total=(sub1+sub2+sub3+sub4+sub5)/5;
    if(total>=90)
    {
        printf("Your Grade is Ex\n");
    }
    else if(total<90 || total>=80)
    {
    
        printf("Your Grade is A\n");
    }
    else if(total<80||total >=70)
    {
       
        printf("Your Grade is B\n");
    }
    else if(total<70||total >=60)
    {
        
        printf("Your Grade is C\n");
    }
    else if (total<60)
    {
        
        printf("Your Grade is F\n");
    }
   return 0;
}