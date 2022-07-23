#include <stdio.h>
void cyclicswap(int *a,int *b,int *c){
    int temp;
    *a=temp;
    *a=*b;
    *b=*c;
    *c=temp;
}
int main()
{
    int a=10,b=11,c=12;
    cyclicswap(&a,&b,&c);
    printf("Values after swaping are :");
    printf("a=%d\n,b=%d\n,c=%d\n",a,b,c);
    return 0;
}