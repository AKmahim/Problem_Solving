#include<stdio.h>
int a;
static int b;

void func()
{
    a=a+1;
    b=b+1;
}
int main()
{
    func();
    printf("Value of a:%d\n",a);
     printf("Value of a:%d\n",b);


}
