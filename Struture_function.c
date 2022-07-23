#include <stdio.h>
struct student{
    char name[50];
    int age;
};
void display(struct student s){
    printf("Name: %s\n",s.name);
    printf("Age : %d",s.age);
} 
int main()
{
    struct student s1 ={"Adam",22};
    display(s1);
    return 0;
}