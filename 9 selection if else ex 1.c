#include <stdio.h>
int main()
{
//modify before c to display the grade as fail if the mark is less than 50
int marks;
printf("Enter module mark ");
scanf("%d",&marks);
if(marks>=50)
printf("pass");
else
printf("Fail");
}
