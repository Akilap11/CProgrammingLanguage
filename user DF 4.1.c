//Create a function which accept 3 values as parameters and calculate,return the average value
#include <stdio.h>
float findavg(float x,float y,float z)
{
    printf("Enter 3 values ");
   scanf("%f %f %f",&x,&y,&z);
   float avg;
   avg=(x+y+z)/3;

  return avg;
}
int main()
{
     float a,b,c;

     //----------------
     printf("Average is %.2f",findavg(a,b,c));
}
//when there is a function with return type,just call the function inside the printf
//void nam return type just call the function name
