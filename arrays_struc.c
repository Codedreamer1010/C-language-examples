#include <stdio.h>
struct employee{
    int age;
    double salary;
}employees[3];
int main()
{
    for(int i=0;i<3;i++){
        printf("For employee %d:\n",i+1);
        printf("Enter age: ");
        scanf("%d",&employees[i].age);
        printf("Enter salary: ");
        scanf("%d",&employees[i].salary);
    }
    for(int i=0;i<3;i++){
        printf("Employee %d: ",i+1);
        printf("age=%d",employees[i].age);
        printf("salary = %.2lf\n",employees[i].salary);
    }
    return 0;
}
