#include<stdio.h>
int main()
{

    int a=10;
    int *p;
    p=&a;

    printf("Value of a is :%d\n",a);

    *p=20;

    printf("Value of p:%d\n",a);
    printf("%p\t%p",&a,p);

}
