#include <stdio.h>
int main()
{
int x;
for(x=1;x<=10;x++)
{
if(x==5)
continue;
printf("%d ",x);
}

}
//1234678910 skip 5 and continue
