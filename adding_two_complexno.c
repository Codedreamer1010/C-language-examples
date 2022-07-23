#include <stdio.h>
typedef struct complex{
    double real;
    double img;
}complex;
int main()
{
    complex c1={.real=10.1,.img=9.3};
    complex c2 ={.real=15.2,.img=5.5};
    complex result;
    result.real=c1.real+c2.real;
    result.img=c1.img+c2.img;
    printf("Result = %.1lf+%.1lfi",result.real,result.img);
    return 0;
}