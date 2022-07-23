#include <stdio.h>
#include <math.h>
double caluculateSD(double data[],int length){
    double sum=0.0,mean,result=0.0;
    for(int i=0;i<length;i++){
        sum+=data[i];
    }
    mean=sum/length;
    for(int i=0;i<length;i++){
        result+=(data[i]-mean)*(data[i]-mean);
    }
    result=sqrt(result/length);
    return result;
}
int main()
{
    double data[5]={3,9,45,22,23},result;
    int length;
    length=(int)sizeof data/sizeof data[0];
    result=caluculateSD(data,length);
    printf("the standard deviation is %.2lf",result);
    return 0;
}