#include<stdio.h>
int main()
{
    double pi=3.1415926;
    int *ptr;
    ptr=&pi;
    printf(" value of pi : %lf\n",pi);
    //printf("Address of X is %p\n",&x);
    printf("Value of pi is %lf\n",*ptr);
    return 0;
}

