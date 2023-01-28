//write a program using loops to input 10 numbers and display the average value
#include <stdio.h>
int main()
{
int no,counter=1,sum=0;
float avg;

while(counter<=10)
{
printf("Enter %d number ",counter);
scanf("%d",&no);
sum=sum+no;
counter++;
}
avg=(float)sum/10;            //avg=sum/10 wrong.int and float 2k//right to left read wenne// or .00 will display
printf("the average value is %.2f \n",avg);
}
