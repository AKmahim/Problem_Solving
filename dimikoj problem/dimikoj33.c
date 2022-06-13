#include<stdio.h>
int main()
{
   //freopen("input.txt","rt",stdin);
   //freopen("output.txt","wt",stdout);
    int T;
    long long int a,b,c,i,j;
    scanf("%d",&T);
    //printf("\n");

    while(T--){
        scanf("%lld %lld %lld",&a,&b,&c);

            if(a%c==0){
                for(i=a;i<=b;i+=c){
                    printf("%lld\n",i);
                }
            }
            else{
                for(j=a; ;j++){
                    if(j%c==0){
                        for(i=j;i<=b;i+=c){
                            printf("%lld\n",i);
                        }
                        j=i;
                    }
                    if(j>=b){
                        break;
                    }
                }
            }


        printf("\n");

    }
}

