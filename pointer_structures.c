#include <stdio.h>
typedef struct Person{
    int age;
    double salary;
} person;
int main(){
    person *personPtr,person1;
    person1.age=30;
    person1.salary=9384.5;
    personPtr=&person1;
    printf("Age: %d\n",personPtr->age);
    printf("salary:%.2lf",personPtr->salary);
    return 0;
}

