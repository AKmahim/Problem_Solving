#include<stdio.h>

//selection sorting algorithm
void selection_sort(int ara[],int n)
{
    int index_min,i,j,tmp;
    for(i=0;i<n-1;i++){
        index_min=i;
        for(j=i+1;j<n;j++){
            if(ara[j]<ara[index_min]){
                index_min=j;
            }
        }
        if(index_min != i){
            tmp=ara[i];
            ara[i]=ara[index_min];
            ara[index_min]=tmp;
        }
    }

}

//main function segment

int main()
{
    int ara[]={7,4,8,2,9,1,5,3,9,10,6};
    int n=11;
    selection_sort(ara,n);
    int i;
    for(i=0;i<n;i++){
        printf("%d,",ara[i]);
    }
}
