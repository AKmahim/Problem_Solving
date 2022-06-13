#include<stdio.h>
//insertion_sort
void sort(int ara[],int n)
{
    int i,j,item;
    for(i=1;i<n;i++){
        item=ara[i];
        j=i-1;
        while( j >= 0 && ara[j] > item){
            ara[j+1]=ara[j];
            j= j-1;
        }

        ara[j+1]=item;
    }

}
//main function
int main()
{
    int ara[]={5,4,2,3,1};
    int i;
    int n=5;
     sort(ara,n);

    for(i=0;i<n;i++){
        printf("%d ",ara[i]);
    }

}

