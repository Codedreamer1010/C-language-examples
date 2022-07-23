#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fptr;
    fptr=fopen("C:\\program.txt","w");
    if(fptr==NULL){
        printf("Error");
        exit(1);
}
fprintf(fptr,"Files are cool");
fclose(fptr);
return 0;
}