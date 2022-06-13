#include<stdio.h>
double fact(double n)
{
    double i,fa=1;
    for(i=1;i<=n;i++){
        fa=fa*i;
    }
    return fa;
}
int main()
{
    //freopen("input.txt","rt",stdin);
    //freopen("output.txt","wt",stdout);

    int i,j,k,T,n;
    double sum;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%d",&n);
        sum=0;
            for(j=1;j<=n;j++){
            sum= sum+(i/fact(i));
        }
        printf("%f\n",sum);
    }
    return 0;
}
