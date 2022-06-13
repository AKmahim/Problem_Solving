#include<stdio.h>

//bubble sort function
void bubble_sort(int ara[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(ara[j]>ara[j+1]){
                temp=ara[j];
                ara[j]=ara[j+1];
                ara[j+1]=temp;
            }
        }
    }
}

//main function
int main()
{
    int ara[]={7,4,8,2,9,1,5,3,9,10,6};
    int n=11;
    bubble_sort(ara,n);
    int i;
    for(i=0;i<n;i++){
        printf("%d  ",ara[i]);
    }
}
