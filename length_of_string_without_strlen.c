#include <stdio.h>
int main()
{
    char str[]="C programming";
    int count=0;
    while(str[count]!='\0')
    {count++;}
    printf("The string length is %d\n",count);
    return 0;
}