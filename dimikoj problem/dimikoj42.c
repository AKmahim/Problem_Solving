#include<stdio.h>
int main()
{
    //freopen("input.txt","rt",stdin);
    //freopen("output.txt","wt",stdout);
    int i,t,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(i=n;i>=0;i--){
            if(i==0){
                printf("1\n");
            }
            else if(i==1){
                printf("2 + ");
            }
            else{
                printf("2^%d + ",i);
            }

        }

    }
}
