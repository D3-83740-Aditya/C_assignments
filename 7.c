#include<stdio.h>
#include<stdlib.h>

    int main(int argc, char *argv[])
    {
        printf("Number of arguments is: ",argc);
        for(int i=1;i<=10;i++)
        {
            printf("%d\n",((atoi(argv[1])*i)));
        }
         return 0;
    }
   
