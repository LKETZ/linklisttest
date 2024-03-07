#include <stdio.h>
#include <stdlib.h>

void myfunc(int a)
{
    printf("Hello %d \n",a);
}

void main(int argc,int *argv[])
{
    int x;
    
    x = 20;
    myfunc(x);
}