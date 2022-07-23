#include <stdio.h>
int main()
{
    int a,b,c,d,e,divide;
    printf("THe division of four or five numbers are");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    divide=a/b/c/d/e;
    printf("The division of five numbers are %d",divide);
    return 0;
}