//Create a function which allows the user to input a character , return and display the entered characater
#include <stdio.h>
//with return type, no parameters
char display()
{
char ch;
printf("Enter a charcter ");
scanf("%c",&ch);
return ch;
}
int main()
{
printf("Entered character is %c",display());

}

