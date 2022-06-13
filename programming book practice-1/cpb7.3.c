#include<stdio.h>
float sum(float a,float b);
int main()
{
    float n1=3.56;
    float n2=5;
    printf("%f",sum(n1,n2));
    return 0;
}
float sum(float a,float b)
{
    return a+b;
}
