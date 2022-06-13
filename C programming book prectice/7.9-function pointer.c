#include<stdio.h>
int sum(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int main()
{
    int a=10,b=5;
    int (*fnc)(int,int);

    fnc=sum;
    printf("Result : %d\n",fnc(a,b));

    fnc=&sub;
    printf("Result : %d\n",fnc(a,b));

}
