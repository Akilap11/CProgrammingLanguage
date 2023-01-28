#include <stdio.h>
int main()
{
int x;
printf("Enter a NB Between 1 to 5 ");
scanf("%d",&x);

switch(x)
{
case 1:printf("You won a B");break;
case 2:printf("You won a W");break;
case 3:printf("You won a B");break;
case 4:printf("You won a X");break;
case 5:printf("You won a Y");break;
default:printf("sorry.try again");
}

}
