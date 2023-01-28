#include <stdio.h>
int main()
{
//Write a program to input Item No, description, item quantity, price of an item and display item no, description with total price.
char Iname[20];
int Ino,Iprice,Iquantity,totalP;
printf("name? ");
scanf("%s",&Iname);
printf("item no? ");
scanf("%d",&Ino);
printf("item price? ");
scanf("%d",&Iprice);
printf("item quantity? ");
scanf("%d",&Iquantity);
totalP=(Iprice*Iquantity);
printf("The item %s which the no of %d price is %d",Iname,Ino,totalP);

}
