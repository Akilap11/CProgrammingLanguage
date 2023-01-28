//write a program using FOR loop to enter marks of 10 students and display the pass rate in percentage.The pass marks is 40.
#include <stdio.h>
int main()
{
int marks,p=0,c,per; //p=pass count

for(c=1;c<=10;c++)
{
  printf("Enter Module mark of the student %d ",c);
  scanf("%d",&marks);
  if(marks>=40)
  p++;
}
per=(p/10)*100;
printf("The pass rate is %d %% ",per);


}
