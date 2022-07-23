#include <stdio.h>
enum suit{clubs,diamonds,spades,hearts};
int main()
{
    enum suit card;
    card=hearts;
    switch (card){
        case clubs:
        printf("card is clubs");
        break;
        case diamonds:
        printf("card is diamond");
        break;
        case spades:
        printf("card is spades");
        break;
        case hearts:
        printf("card is hearts");
        break;
    }
    return 0;
}