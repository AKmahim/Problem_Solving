#include<math.h>
#include<stdio.h>
int main()
{
    double a,b,c,s,area;
    int t;
    scanf("%d",&t);
    while(t--){
        scanf("%lf %lf %lf",&a,&b,&c);
        s=(a+b+c)/2;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        printf("Area = %.3lf\n",area);

    }
    return 0;
}

