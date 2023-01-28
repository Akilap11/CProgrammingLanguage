#include <stdio.h>
int main()
{
//write a program to input a nb,display the entered number is a positive,negitive or a zero

int no;
printf("Enter a number ");
scanf("%d",&no);
if(no>0)
printf("positive");
else if(no<0)
printf("negative");
else
printf("zero");
}
