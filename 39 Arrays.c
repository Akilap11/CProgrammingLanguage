#include <stdio.h>
int main()
//declare an integer array to store 10 numbers.input the values into the array and display them reverse order
{
int num[10];
int i;

for(i=0;i<10;i++) //array index always start with 0.so i=o
{
    printf("Enter a Number ");
    scanf("%d",&num[i]);
}
for(i=9;i>=0;i--)
printf("%d ",num[i]); //1 line.curly brackets not mandotory



}
