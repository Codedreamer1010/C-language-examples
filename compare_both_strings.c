#include <stdio.h>
#include<string.h>
int main()
{
    char str1[20]="abcd",str2[20]="cdEA";
    int result;
    result=strcmp(str1,str2);
    printf("The result is %d\n",result);
    if(result==0)
    {printf("They both are equal");}
    else{printf("They are not equal");}
    return 0;
}