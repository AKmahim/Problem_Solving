#include<stdio.h>
#include<math.h>
int main()
{
    int i,T;
    double a,b,c,s,area;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%lf %lf %lf",&a,&b,&c);
        s=(a+b+c)/2;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        printf("Area = %.3lf\n",area);

    }
    return 0;

}
