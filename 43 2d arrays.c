#include <stdio.h>
int main()
{
    int r,c;
    int arr[3][4];

    for(r=0;r<3;r++)
    {
       for(c=0;c<4;c++)
       {
           printf("Enter a number ");
           scanf("%d",&arr[r][c]);
       }printf("\n");
    }
//output
for(r=0;r<3;r++)
    {
       for(c=0;c<4;c++)
       {
           printf("%d ",arr[r][c]);

       }printf("\n");
    }
}
