#include<stdio.h>
void fn(int ara[])
{
    ara[0]=100;
    return;
}
int main()
{
    int ar[]={1,2,3,4,5};
    printf("%d\n",ar[0]);
    fn(ar);
    printf("%d\n",ar[0]);
}
