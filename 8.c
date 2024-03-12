#include<stdio.h>

//void readstudent(struct student s);
struct student
{
    char studentName[10];
    char rollNo[5];
    int totalMarks;
    
};

void readstudent(struct student st)
{
    printf("The name of student is:  %s\n",st.studentName);
    printf("The roll no. is: %s \n",st.rollNo);
    printf("total marks obtained: %d\n",st.totalMarks);
}
int main()
{
    
    struct student s1;
    printf("Enter the name of student: ");
    gets(s1.studentName);
    printf("Enter roll no. of student: ");
    gets(s1.rollNo);
    printf("Enter marks of student: ");
    scanf("%d",s1.totalMarks);
    readstudent(s1);

    return 0;
}