//write a program to create the following 2 functions with void as return type
//1.a function to display ur name 5 times
//2.a function to display nsbm 5 times
//call the above 2 functions inside the main
#include <stdio.h>
void displayname()
{
    int x;
    for(x=1;x<6;x++)
    printf("AKILA \n");
}
void displayuni()
{
    int x;
    for(x=1;x<6;x++)
    printf("NSBM \n");
}
int main()
{
    displayname();
    displayuni();
}
