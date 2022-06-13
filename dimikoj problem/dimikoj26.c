#include<stdio.h>
int main()
{
    //freopen("input.txt","rt",stdin);
    //freopen("output.txt","wt",stdout);

    int i,j,T,count;
    float n,f;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%f",&n);
        count=0;
        for(j=1; ;j++){
            f=n/2;
            n=f;
            if(n <=1.00){
                break;
            }
            count++;
        }
        printf("%d days\n",count+1);
    }
    return 0;
}
