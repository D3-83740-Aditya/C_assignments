#include<stdio.h>

int  main(void)
{
    int num=0;
    printf("Enter the number:");
    scanf("%d",&num);
    int prod=1;
    for(int i=num;i>=1;i--)
    {
        prod=prod*i;
    }
    printf("Factorial of %d is %d",num,prod);
    return 0;
}
