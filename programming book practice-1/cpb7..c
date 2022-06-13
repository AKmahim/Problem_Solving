#include<stdio.h>
//double pi=3.14;
void fn(double pi)
{
    pi=3.1416;

}
int main()
{
    double pi=3.14;
    printf("%lf\n",pi);
    fn(pi );
    printf("%lf",pi);
    return 0;

}
