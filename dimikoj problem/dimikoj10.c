#include<stdio.h>
int main()
{
    //freopen("input.txt","rt",stdin);
    //freopen("output.txt","wt",stdout);
    int T;
    int ball_played,r1,r2,B;
    double current_rr,asking_rr;
    scanf("%d",&T);
    for(int i=1;i<=T;i++){
        scanf("%d %d %d",&r1,&r2,&B);
        ball_played=300-B;
        current_rr=((r2*1.0)/ball_played)*6;
        asking_rr=((((r1-r2)*1.0)+1)/B)*6;
        if(r1>1000 || r2>r1 || B>300 || r1<1 || r2<1 || B<1){
            printf("0.00\n");
        }
        else{
                printf("%0.2lf %0.2lf\n",current_rr,asking_rr);
        }

    }
    return 0;
}
