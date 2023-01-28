#include <stdio.h>
int main()
{
//write a program to input a stdnt admission nb,marks of a module and display admission nb with grade,grades are, >=75 A  50-75 B <50 F
//variables
int adno,marks;
char grade;
//inputs
printf("enter admission nb and mark ");
scanf("%d %d",&adno,&marks);
//process
if(marks>=75)
{grade='A';}
else if(marks>50)
grade='B';
else
grade='F';
//output
printf("admission nb %d grade is %c",adno,grade);



}
