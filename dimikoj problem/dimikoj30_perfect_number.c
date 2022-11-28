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
            printf("YES, %d is a perfect number!\n",n);
        }
        else{
            printf("%d is not a perfect number!\n",n);
        }
    }

 return 0;
}
