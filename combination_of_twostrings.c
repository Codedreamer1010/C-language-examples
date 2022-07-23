#include <stdio.h>
#include <string.h>
int main()
{
    char str1[20]="c";
    char str2[20]="program";
    strcat(str1,str2);
    puts(str1);
    puts(str2);
    return 0;
}