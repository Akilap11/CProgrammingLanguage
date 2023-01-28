//input age of series of students ends with dummy value-1 and display the number of teenagers
#include <stdio.h>
int main()
{
int t=0,age;

printf("Enter the age ");
scanf("%d",&age);

while(age!=-1)
{
if(age>=13 && age<=19)
t++;
printf("Enter the age ");
scanf("%d",&age);
}
printf("No of teens %d",t);
}
