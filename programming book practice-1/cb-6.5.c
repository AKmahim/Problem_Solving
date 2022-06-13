#include<stdio.h>
int main()
{
    int i,j,l,temp;
    int ara1[]={1,2,3,4,5,6,7,8,9,10};
    //int ara2[10];
    for(i=0,j=9;i<5;i++){
            temp=ara1[j];
            ara1[j]=ara1[i];
            ara1[i]=temp;
            j++;
           // printf("%\t",ara1[j]);
   }
    for(l=0;l<10;l++){
         printf("%d\t",ara1[l]);
    }
    return 0;
}
