#include <stdio.h>
int main()
{
//Highest number of 3 numbers

int x,y,z,max;
printf("Enter 3 numbers ");
scanf("%d %d %d",&x,&y,&z);

max=x;

if(y>max)
max=y;

if(z>max)
max=z;

printf("Highest nb is %d\n",max);



}
