
#include<stdio.h>
int gcd(int a,int b)
{
    int gcd,s;
    if(a<b){
        s=a;
    }
    else{
        s=b;
    }
    while(s>=1){
        if(a%s==0 && b%s==0){
            gcd=s;
            break;
        }
        s--;
    }
    return gcd;

}

int main()
{
    int a,b,g,lcm,t;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&a,&b);
        g=gcd(a,b);
        lcm=(a*b)/g;
        printf("LCM = %d\n",lcm);
    }



}
