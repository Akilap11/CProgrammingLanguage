//write a program using FOR loop to enter 10 numbers and display the total count of odd,even numbers in the entered number series
#include <stdio.h>
int main()
{
int x,odd=0,even=0,nb;
for(x=1;x<=10;x++)
{
printf("Enter number %d ",x);
scanf("%d",&nb);

if(nb%2==0)   //remainder 0
even++;

else
odd++;
}
printf("Odd count is %d and Even Count is %d",odd,even);

}
