#include <stdio.h>
int main()
{
    char s[8]="abcd";
    s[0]='1';
    s[2]='3';
    s[3]='4';
    printf("%c\n",s[0]);
    printf("%c\n",s[2]);
    printf("%c\n",s[3]);
    return 0;
}