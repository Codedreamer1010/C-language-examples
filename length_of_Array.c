#include <stdio.h>
int main(void)
{
int data[5],length;
length=sizeof(data)/sizeof(data[0]);
printf("The length of the array is %d\n",length);
return 0;
}