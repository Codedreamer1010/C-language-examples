#include <stdio.h>
int main()
{
    int arr[5]={231,2432,32523,13213};
    for(int i=0;i<5;++i){
        if(arr[0]<arr[i]){
            arr[0]=arr[i];
        }
    }
    printf("The largest no is %d\n",arr[0]);
    return 0;
}