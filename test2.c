#include <stdio.h>
# define ERRORS %
char *err_msg[]={
    "All's well,
    File not found,
    No read permission for file,
    insufficient memory,
    No write permission for file,
    "};
    int main()
    {
        int *err_no;
        for(err_no=0;err_no<ERRORS;err_no++)
        {
            printf("\nError messsage %d is : %s\n",err_no+1,err_msg[err_no];
        }
    }