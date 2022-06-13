#include<stdio.h>
int main()
{
    freopen("input.txt","rt",stdin);
    freopen("output.txt","wt",stdout);

    int i,j,k,T,n;
    scanf("%d",&T);
    int o=T;
    for(i=1;i<=T;i++){
        scanf("%d\n",&n);
        for(j=1;j<=n;j++){
                printf("\n");
            for(k=1;k<=n;k++){
                printf("*");
            }
        }
            printf("\n \n");

    }
    return 0;
}
