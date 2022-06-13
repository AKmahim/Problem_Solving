#include<stdio.h>
int main()
{
    int i,j,k,count;
    int f[]={78,68,78,69,80};
    for(i=65;i<=80;i++){
            count=0;
        for(j=0;j<5;j++){
            if(f[j]==i){
                count++;
            }

        }
        if(count!=0){
             printf("The number %d got %d student\n",i,count);
        }

    }


}
