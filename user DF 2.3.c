//create a function which accept 2 float values as parameters and display the average value
#include <stdio.h>
void findavg(float a,float b)
{
    float avg;
    avg=(a+b)/2;
    printf("average is %.2f ",avg);
}
int main()
{
    float x,y;
    printf("Enter 2 numbers ");
    scanf("%f %f",&x,&y);
    findavg(x,y);
}
