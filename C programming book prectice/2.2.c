#include<stdio.h>
int main()
{
    int x=10;
    int *p;
    p=&x;
    printf("*p = %d\n",*p);
    printf("Address of X is %p\n",&x);
    printf("Vaue of p is %p\n",p);
    return 0;
}
