#include<stdio.h>

void test1(int n)
{
    n=n+10;
}

void test2(int *p)
{
    *p=*p+10;
}


int main()
{
    int n=5;
    test1(n);
    printf("%d\n",n);
    test2(&n);
    printf("%d\n",n);

}

