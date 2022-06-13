#include<stdio.h>
int main()
{
    int n,x,m;
    while(1){
        printf("Please enter you number : ");
        scanf("%d",&n);
        if(n==0){
            break;

        }
        printf("How many bits you want to shift right: ");
        scanf("%d",&x);
        m=n>>x;
        printf("Result is :%d\n\n",m);

    }
}
