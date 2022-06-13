#include<stdio.h>
int main()
{
    //freopen("input.txt","rt",stdin);
    //freopen("output.txt","wt",stdout);
    int i,T,rev;
    long int n;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%ld",&n);
        rev=0;
        while(n !=0){
            rev=rev*10;
            rev=rev+n%10;
            n=n/10;
        }
        printf("%d\n",rev);
    }
    return 0;
}
