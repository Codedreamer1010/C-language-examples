#include <stdio.h>
enum week{
    sunday,monday,tuesday,wednesday,thursday,friday,saturday
};
int main()
{
    enum week today;
    today=monday;
    printf("Day is %d\n",today+1);
    return 0;
}