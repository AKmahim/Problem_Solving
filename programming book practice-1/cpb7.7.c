#include<stdio.h>
int find_max(int  ara[],int n)
{
    int i,max;
    ara[10];
    max=ara[0];
    for(i=0;i<n;i++){
        if(ara[i]>max){
            max=ara[i];
        }
    }
    return max;
}
int main()
{
    int n=10;
    int h[]={10,20,30,40,50,60,70,80,90,100};


    printf("%d",find_max(h,n));
    return 0;
}
