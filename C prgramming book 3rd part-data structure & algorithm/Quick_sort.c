#include<stdio.h>

// partition for quick sort
int partition(int ara[],int low,int high)
{
    int pivot,i,j,temp;
    pivot = ara[high];

    for(i=low-1,j=low;j<high;j++){
        if(ara[j] < pivot){
            i =i+ 1;

            temp = ara[j];
            ara[j]=ara[i];
            ara[i] = temp;

        }

    }
    temp = ara[high];
    ara[high]=ara[i+1];
    ara[i+1] = temp;
    return i+1;
}

//quick sort main function
void quick_sort(int ara[],int low,int high)
{
    if(low>=high){
        return;
    }
    int p = partition(ara,low,high);
    quick_sort(ara,low,p-1);
    quick_sort(ara,p+1,high);

}

//main function

int main()
{
    int i,n=10;
    int ara[]={1,4,2,5,3,7,6,8,9,11};



    quick_sort(ara,0,n);
    printf("the sorted data is : ");
    for(i=0;i<n;i++){
        printf(" %d ",ara[i]);
    }

}

