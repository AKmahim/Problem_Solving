#include<stdio.h>
int main()
{
    int x=10,y;
    int *p,*q;

    p=&x;
    y=*p;
    *p=15;
    q=&y;
    *q=20;


    printf("value of x: %d\n",x);
    printf("value of y: %d\n",y);
    printf("Value of *p :%d\n",*p);
    printf("Value of *q  :%d\n",*q);
    return 0;
}
