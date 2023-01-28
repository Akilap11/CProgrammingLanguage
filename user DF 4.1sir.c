#include <stdio.h>
float findAvg(int a,int b,int c);
int main()
{
//calling the function
int x,y,z;
printf("Enter three numbers ");
scanf("%d %d %d",&x,&y,&z);
//........
printf("The average is %.2f \n",findAvg(x,y,z));
}
//called function (with return type, with parameters)
float findAvg(int a,int b,int c)
{
float avg;
avg=(float)(a+b+c)/3.0;
return avg;
}
