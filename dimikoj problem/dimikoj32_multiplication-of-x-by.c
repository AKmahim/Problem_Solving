#include<stdio.h>
int main()
{
    //freopen("input.txt","rt",stdin);
    //freopen("output.txt","wt",stdout);
    int T,n,i,x;
    scanf("%d",&T);
    //printf("\n");

    while(T--){
        scanf("%d %d",&x,&n);
        if(x<n){
            for(i=x;i<=n;i++){
                  if(i%x ==0){
                    printf("%d\n",i);
              }
           }
        }
        else{
            printf("Invalid!\n");
        }
        printf("\n");

    }
}
