#include<stdio.h>
#include<math.h>
int main()
{
    //freopen("input.txt","rt",stdin);
    //freopen("output.txt","wt",stdout);

    int i,j,T;
    double base,power,sum;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%lf %lf",&base,&power);
        sum=0;
        for(j=0;j<=power;j++){
            sum=sum+pow(base,j);
        }
    printf("Result = %.0lf\n",sum);
    }
    return 0;
}
