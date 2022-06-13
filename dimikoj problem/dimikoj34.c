#include<stdio.h>

long long int LCM(long long a,long long int b)
{
   long long  int t,x,gcd,lcm;
    if(a<b){
        x=a;
    }
    else{
        x=b;
    }
    for(;x>=1;x--){
        if(a%x==0 && b%x==0){
            gcd=x;
            break;
        }
    }
    lcm=(a*b)/gcd;
    return lcm;
}


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

           int lcm=LCM(a,b);
           for(i=lcm;i<=c;i=i+lcm){
               printf("%lld\n",i);
            }
            if(T){
            printf("\n");
        }



    }
}









