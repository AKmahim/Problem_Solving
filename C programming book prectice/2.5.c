#include<stdio.h>
int main()
{
    int x=5;
    int *p;
    p=&x;
    printf("%d\n",x);
    *p=10;

    printf("%d\n",x);
    x=20;
    printf("%d\n",x);

    printf("Value of x:%d\n",x);
    printf("Value stored at location %p is %d\n",p,*p);

    printf("Address of x :%p\n",&x);
    printf("value of p: %p\n",p);

    return 0;a


}
