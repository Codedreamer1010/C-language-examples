#include <stdio.h>
#include <string.h>
int main()
{
    char str1[20]="program";
    char str2[20]={'p','r','o','g','r','a','m'};
    printf("The length of string 1 is %zu\n",strlen(str1));
    printf("The length of string 2 is %zu\n",strlen(str2));
    return 0;
}