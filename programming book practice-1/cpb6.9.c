#include<stdio.h>
int main()
{
    int i,j;
    int f[]={78,68,78,69,80};
    int count[101];
    for(i=0;i<100;i++){
        count[i]=0;
    }
    for(i=0;i<5;i++){
        count[f[i]]++;
    }
    for(j=0;j<100;j++){
        //if(count[j]!=0){
             printf("The number got %d student\n",count[j]);

    }
}
