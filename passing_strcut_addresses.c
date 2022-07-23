#include <stdio.h>
typedef struct complex{
    double real;
    double imag;
}complex;
void addnumbers(complex c1,complex c2,complex*sum){
    sum->real=c1.real+c2.real;
    sum->imag=c1.imag+c2.imag;
}
int main()
{
    complex c1={1.4,4.5},c2={5.4,-3.4};
    complex result;
    addnumbers(c1,c2,&result);
    printf("result = %.1lf+%.1lfi",result.real,result.imag);
    return 0;
}