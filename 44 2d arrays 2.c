//declare a 2d integer array with 3 rows and 4 columns.input the values into the array and display the values in the form of matrix
#include <stdio.h>
int main()
{
int arr[3][4],r,c;
//input
for(r=0;r<3;r++)
{
for(c=0;c<4;c++)
{
printf("Enter a Number ");
scanf("%d",&arr[r][c]);
}
}
//print
for(r=0;r<3;r++)
{
for(c=0;c<4;c++)
{
printf("%d ",arr[r][c]);
}
printf("\n");
}
}

