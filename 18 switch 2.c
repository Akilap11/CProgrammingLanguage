#include <stdio.h>
int main()
{
 //Write a program to input a character display the entered character is a vowel or not
char ch;
printf("Enter a character ");
scanf("%c",&ch);

switch(ch)
{
  case 'a':printf("is a vowel ");break;
  case 'e':printf("is a vowel ");break;
  case 'i':printf("is a vowel ");break;
  case 'o':printf("is a vowel ");break;
  case 'u':printf("is a vowel ");break;
  default:printf("%c is not a vowel",ch);

}

}


