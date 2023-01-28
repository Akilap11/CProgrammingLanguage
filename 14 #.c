#include <stdio.h>
int main()
{
//Highest number of 3 numbers

int x,y,z,max;
printf("Enter 3 numbers ");
scanf("%d %d %d",&x,&y,&z);

if(x>y && x>z)
max=x;

else if(y>z)
max=y;

else
max=z;

printf("Highest nb is %d\n",max);



}
