//Write a prg. to enter series of numbers ends with dummy value -99 and display the no. of odd and even numbers in the entered number series
#include <stdio.h>
int main()
{
int n,odd=0,even=0;
printf("Enter numbers (-99 to terminate) ");
scanf("%d",&n);

while(n!=-99)
{
if(n%2==0)
even++;

else
odd++;

printf("Enter numbers (-99 to terminate) ");
scanf("%d",&n);
}
printf("no of Even numbers= %d ",even);
printf("no of Odd numbers= %d ",odd);
}
