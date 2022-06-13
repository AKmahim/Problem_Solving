#include<stdio.h>
int x=10;
void myfunc(int y)
{
    y=y*2;
    x=x+10;
    printf("myfunc,%d %d\n",x,y);

}

int main()
{
    int y=5;
    x=10;
    myfunc(y);
    printf("main,%d %d",x,y);
    return 0;

}
