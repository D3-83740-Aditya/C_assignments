#include<stdio.h>

int main()
{
    char ch[20]="Pratiksha@gmail.com";
    for(int i=0;i<sizeof(ch);i++)
    {
        if(ch[i]>64 && ch[i]<90)
        {
            printf("%c is uppercase\n",ch[i]);
        }
        else if(ch[i]>96 && ch[i]<123)
        {
            printf("%c is lowercase\n",ch[i]);
        }
        else
        {
            printf("%c is a symbol\n",ch[i]);
        }
        
    }
    return 0;

}