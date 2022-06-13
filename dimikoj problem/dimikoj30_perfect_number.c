#include<stdio.h>
int main()
{
    int n,sum;
    int T;
    scanf("%d",&T);
    while(T--){
            sum=0;
        scanf("%d",&n);
        for(int i=1;i<n;i++){
            if(n%i ==0){
                sum +=i;
            }

        }
        if(sum ==n){
            printf("%d eh perfeito\n",n);
        }
        else{
            printf("%d nao eh perfeito\n",n);
        }
    }

 return 0;
}
