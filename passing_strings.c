#include <stdio.h>
void printstring(char str[]){
    printf("strings Output :");
    puts(str);
}
int main()
{
    char str[10]="Hey there";
    printstring(str);
    return 0;
}