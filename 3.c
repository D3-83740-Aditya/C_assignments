#include<stdio.h>

int main(void)
{
    int num;
    int num1=0;
    int num2=1;
    int sum=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    do
    {
        sum=num1+num2;
        if(sum<=num)
        {
        printf("%d\n",sum);
        }
        num1=num2;
        num2=sum;
    }while(sum<=num);
    return 0;
}