#include<stdio.h>
int main()
{
    int i,T,n;
    int ara[]={6,28,496,8128,33550336};
    scanf("%d",&T);
    while(T--){
        scanf("%d",&n);
        for(i=0;i<5;i++){
            if(ara[i] <=n){
                printf("%d\n",ara[i]);
            }
            else{
                break;
            }
        }
        if(T>=1){
          printf("\n");
        }
    }
    return 0;

}
