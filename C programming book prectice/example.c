#include<stdio.h>
//bubble  sort
void bubble_sort(int ara[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(ara[j]>ara[j+1]){
                temp=ara[j+1];
                ara[j+1]=ara[j];
                ara[j]=temp;
            }
        }
    }
}
//main function
int main()
{
    int ara[]={8,2,5,6,10};
    int n=5;
    bubble_sort(ara,n);
    int i;
    for(i=0;i<n;i++){
        printf("%d,",ara[i]);
    }
    return 0;
}
