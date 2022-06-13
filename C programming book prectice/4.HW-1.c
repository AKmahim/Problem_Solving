#include<stdio.h>

int series(int n)
{
    int sum=n;
    if(n<0){
        return 0;
    }
    //printf("Value in up:%d & %d\n",n,sum);
    return sum + series(n-1);
    //printf("Value in down:%d & %d\n",n,sum);

}
int main()
{
    int n;
    printf("Enter the series last number: ");
    scanf("%d",&n);
    printf("The result is :%d\n",series(n));
}

