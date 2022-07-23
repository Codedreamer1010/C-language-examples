#include <stdio.h>
int main()
{
    char s[30];
    printf("Enter Name: ");
    fgets(s, sizeof(s), stdin);
    printf("Name:  ");
    puts(s);
    return 0;
}