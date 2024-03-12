#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
    int num=0;
    printf("The value of argc is %d\n",argc);

int max=atoi(argv[1]);
for(int i=2;i<argc;i++)
{
   int num=atoi(argv[i]);
    if(num>num)
    {
        max=num;
    }
}
printf("The maximum number is %d:",max);
     
return 0; 
}
  