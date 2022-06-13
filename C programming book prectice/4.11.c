#include<stdio.h>
int factorial(int n)
{
    if(n == 0){
        return 1;
    }
    int f=factorial(n-1);
    return n*f;


}

int main()
{
    int n;
    scanf("%d",&n);

    if(n<0){
        printf("Undefined");
        return 0;
    }
    printf("Factorial of %d is %d\n",n,factorial(n));
    return 0;
}
