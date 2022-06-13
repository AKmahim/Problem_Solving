#include<stdio.h>

#define max(a,b) (a>b? a : b)
int main()
{
    int a=12,b=3;
    double d1=32.42,d2=23.43;

    printf("Maximum of %d and %d is %d\n",a,b,max(a,b));
    printf("Maximum of %lf and %lf is %lf\n",d1,d2,max(d1,d2));

    return 0;

}
