#include <stdio.h>
struct person{
    char name[50];
    int age;
};
int main()
{
    struct person person1;
    printf("Enter Name: ");
    fgets(person1.name,sizeof(person1.name),stdin);
    printf("Enter age: ");
    scanf("%d",&person1.age);
    printf("Name: %s",person1.name);
    printf("Age: %d",person1.age);
    return 0;
    
}
