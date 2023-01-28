#include <stdio.h>
void main()
{
//declaration of the variables and array
float prices[10],sum,avg,max;
int i;
//input
for(i=0;i<10;i++)
{
printf("Enter the price of product %d ",i+1);
scanf("%f",&prices[i]);
}
sum=prices[0];
max=prices[0];
for(i=1;i<10;i++)
{
sum=sum+prices[i];
//........imagine a value AND think :)
if(prices[i]>max)
max=prices[i];
}
avg=sum/10.0;
printf("The average price is %.2f \n",avg);
printf("The highest price is %.2f \n",max);
}
