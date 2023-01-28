#include <stdio.h>
//in below 'int a and int b' are called as parameters
void findSum(int a,int b)
{
    int x,y,total=a+b;
    printf("Enter two numbers ");
    scanf("%d %d",&x,&y);

printf("The total is %d \n",total);

}
int main()
{
int x,y;

findSum(x,y);
}

