#include<stdio.h>
#include<math.h>
int main()
{
    //freopen("input.txt","rt",stdin);
    //freopen("output.txt","wt",stdout);
    int i,j,T,res,mod,temp;
    int p,q,c;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%d %d %d",&p,&q,&c);
        for(j=1;j<=q;j++){
            temp=(temp*p)%c;
        }
        int res=temp%c;
            printf("Result = %d\n",res);
    }
    return 0;
}
