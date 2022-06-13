#include<stdio.h>
int main()
{
    //freopen("input.txt","rt",stdin);
   // freopen("output.txt","wt",stdout);
    int i,T,n;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%d",&n);
        if(n==2 || n==3 || n==5){
            printf("%d is a prime\n",n);
        }
        else if(n%2==0 || n%3==0 || n%5==0){
            printf("%d is not a prime\n",n);
        }
        else{
            printf("%d is a prime\n",n);
        }
    }
    return 0;
}
