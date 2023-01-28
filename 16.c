#include <stdio.h>
int main()
{
//write a c program to input an admission nb,mark of a module and display admission nb with grade
//the grade is assigned as follows.
//Marks >=75  A //Marks 65-75 B //Marks 55-65 C //Marks 45-55 S //Marks <45 F

int adno,mark;
char grade;
printf("enter adno and mark ");
scanf("%d %d",&adno,&mark);

if(mark>=75)
grade='A'; //' damme 1 akurak nisa

else if(mark=65-75)
grade='B';

else if(mark=55-65)
grade='C';

else if(mark=45-55)
grade='S';

else
grade='F';

printf("adno %d module grade is %c",adno,grade);


}

