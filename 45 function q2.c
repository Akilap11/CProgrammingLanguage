#include <stdio.h>
//Create a function which accept 2 integers as parameters & display the highest
void highest(int num1,int num2)
{
int max;
if(num1>num2)
{
max=num1;
}
else
{
max=num2;
}
printf("The Highest number is %d",max);
}
int main()
{
int a,b;
printf("Enter 1st value =");
scanf("%d",&a);
printf("Enter 2nd value");
scanf("%d",&b);

highest(a,b);
}
