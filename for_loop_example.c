#include <stdio.h>
int main()
{
    unsigned long long sum=0LL;
    unsigned int count=0;
    printf("Enter the numbers which u want to sum: ");
    scanf("%d",&count);
    for(unsigned int i =1;i<=count;i++)
    {
        printf("Insideloop");
    sum+=i;
    }
    printf("\ntotal of the first %u numbers is %llu\n",count,sum);
    return 0;
    
}