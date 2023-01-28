#include <stdio.h>
//with return type, no parameters
int findSum()
{
int a,b,c;
printf("Enter two numbers ");
scanf("%d %d",&a,&b);
c=a+b;
return c;
}
int main()
{
//A function with return type is called inside the printf()
printf("The total is %d \n",findSum());

}
