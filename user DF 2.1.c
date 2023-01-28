//2)no return type with parameters
//create a function which accept 2 integers as parameters and display the total

#include <stdio.h>

void findsum(int n1,int n2) //int a and int b are parameters
{
int total;
printf("Enter 2 numbers ");
scanf("%d %d",&n1,&n2);
total=n1+n2;
printf("total is %d",total);
}
int main()
{
    int x,y;
    findsum(x,y);

}
