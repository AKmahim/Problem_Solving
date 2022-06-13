#include<stdio.h>
int main()
{
    int n,i,T,sum,r,temp;
    scanf("%d",&T);
    while(T--){
        scanf("%d",&n);
        temp=n;
        sum=0;
        while(temp !=0){
            r=temp%10;
            sum=sum+(r*r*r);
            temp /=10;
        }
        if(sum==n){
        printf("%d is an armstrong number!\n",n);
    }
    else{
        printf("%d is not an armstrong number!\n",n);
    }
    }


    return 0;
}
