//1)no return type or no parameters

#include <stdio.h>

void print() //void=no return type  //print=name of the function(whatever name)(no parameters())
{
 //Function Body
int x;
for(x=1;x<=10;x++)
    printf("NSBM \n"); //void wala meka execute unata printf display wenne na.only execute.no return
}

int main()    //int is with return type.(LATER) //main()also a function.no parameters
{
 //call the function
print(); //when we call the function,it search for the function body here and execute it
print(); //print void function body 2 times(more 10 times)
}
//function with no return type can be called inside the main method directly by using the function name
//advantages: we can call few times and get output few times
//void is not a loop
