#include<stdio.h>
int dec_to_bin(int n)
{
    int i,j,temp,ara[8];
    temp=n;
    for(i=0;i<8;i++){
        ara[i]=0;
    }
    for(i=0;temp !=0;i++){
            ara[i]=n%2;
            temp =temp/2;
            n=temp;

    }
    for(i=7,j=0;i>=0;i--,j++){
        ara[i]=ara[j];
    }
    return ara;

}

int main()

{
    int n;
    scanf("%d",&n);
    printf("The binary form of %d is :",dec_to_bin(n));


}
