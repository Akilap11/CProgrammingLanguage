#include <stdio.h>
//declare an array to store 10 prices of products.input prizes into the array and display the average prize and highest prize
int main()
{
float prize[10],max=0,sum=0,avg;
int i;

for(i=0;i<10;i++)
{
    printf("Enter a prize %d ",i+1);//i+1 temporaly add a 1. i=i+1 value of i will perma change.
    scanf("%f",&prize[i]);//0 place ekata thama prize ek add wenne mulin
    sum=sum+prize[i];
    if(prize[i]>max)
    max=prize[i];
}
printf("Maximum value is %.2f\n",max);
avg=sum/10;
printf("Average is %.2f",avg);
}


