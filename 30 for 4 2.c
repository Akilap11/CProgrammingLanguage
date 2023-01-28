#include <stdio.h>
int main()
{
int marks,p=0,c;
float per;



for(c=1;c<=10;c++)
{
printf("Enter Module marks of the Student %d ",c);
scanf("%d",&marks);
if(marks>=50)
p=p+1;
}
per=(float)(p/10.0)*100;
printf("The pass rate is %.2f %%",per*10);
}
