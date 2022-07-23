#include <stdio.h>
struct Person{
    char name[50];
    int age;
};
int main()
{
    struct Person person1={.name="Saiteja",.age=18};
    struct Person person2={.name="neharika",.age=18};
    printf("Person1 name is %s\n",person1.name);
    printf("Person1 age is %d\n",person1.age);
    printf("Person2 name is %s\n",person2.name);
    printf("Person2 age is %d\n",person2.age);
    return 0;
}