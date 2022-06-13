#include<stdio.h>
int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int operate(int (*op)(int,int),int a,int b)
{
    return op(a,b);
}

int main()
{
    int a=10,b=5;
    printf("Result : %d\n",operate(add,a,b));
    printf("Result : %d\n",operate(sub,a,b));
}
