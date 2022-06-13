#include<stdio.h>
int main()
{
    //freopen("input.txt","rt",stdin);
    //freopen("output.txt","wt",stdout);

    int T,i,n;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%d",&n);
        int j=5,count=0;
        while(n/j >=1){
            count=count+ (n/j);
            j=j*5;
        }
        printf("%d\n",count);
        }
        return 0;

}
