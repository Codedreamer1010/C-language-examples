#include <stdio.h>
void copyString(char *str1,char *str2){
    while(*str1!='\0'){
        *str2=*str1;
        ++str1;
        ++str2;
    }
    *str2='\0';
}
int main()
{
    char str1[]="C programming",str2[100];
    copyString(str1,str2);
    printf("str2= %s",str2);
    return 0;
}