#include <stdio.h>
int main()
{
 //input name and birth year and display name with age
 char sname[15];
 int by,age;
 printf("Enter Ur name ");
 scanf("%s",&sname);
 printf("Enter by ");
 scanf("%d",&by);
 age=(2021-by);
 printf("Hi %s you are %d years old",sname,age);

}
