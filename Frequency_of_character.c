#include <stdio.h>
int main()
{
    char str[]="C programming is intresting.";
    char ch = 'e';
    int frequency =0;
    for(int i=0;str[i]!='\0';++i){
        if(str[i]==ch)
        {++frequency;}
    }
    printf("Frequency of %c : %d",ch,frequency);
    return 0;
}