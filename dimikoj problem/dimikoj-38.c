#include<stdio.h>
int main()
{
    freopen("input.txt","rt",stdin);
    //freopen("output.txt","wt",stdout);
    int i,j,T,pn,dn;
    scanf("%d",&T);
    while(T--){
        scanf("%d %d",&dn,&pn);
        for(i=1;i<=dn;i++){
            for(j=1;j<=i;j++){
                printf("%d ",pn);
            }
            printf("\n");
        }
        for(i=dn-1;i>0;i--){
            for(j=i;j>0;j--){
                printf("%d ",pn);
            }
            printf("\n");
        }
        printf("\n");
    }
}
