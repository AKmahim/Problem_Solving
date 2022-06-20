#include<stdio.h>
#include<ctime>
#include<algorithm>
using namespace std;



//bubble sort function
void bubble_sort(int ara[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(ara[j]>ara[j+1]){
                swap(ara[j],ara[j+1]);
            }
        }
    }
}


// partition for quick sort
int part(int ara[],int low,int high)
{
    int pivot,i,j,temp;
    pivot = ara[high];

    for(i=low-1,j=low;j<high;j++){
        if(ara[j] < pivot){
            i =i+ 1;

            swap(ara[i],ara[j]);
        }

    }
    swap(ara[high],ara[i+1]);
    return i+1;
}

//quick sort main function
void quick_sort(int ara[],int low,int high)
{
    if(low>=high){
        return;
    }
    int p = part(ara,low,high);
    quick_sort(ara,low,p-1);
    quick_sort(ara,p+1,high);

}


int main()
{
    int i,n1,n2;
    int ara1[10000];
    int ara2[10000];
    clock_t start_time,end_time;
    double time_elapsed1,time_elapsed2,time_diff;

    printf("Enter the amount of element: ");
    scanf("%d",&n1);
    printf("Enter %d amount of number for array 1: ",n1);
    for(i=0;i<n1;i++){
        scanf("%d",&ara1[i]);

    }
    printf("Enter the amount of element: ");
    scanf("%d",&n2);
    printf("Enter %d amount of number for array 2: ",n2);
    for(i=0;i<n2;i++){
        scanf("%d",&ara2[i]);

    }
    //take starting time
    start_time = clock();

    bubble_sort(ara1,n1);
    //take ending time
    end_time = clock();

    //calculating bubble sort time
    time_elapsed1=(double)(end_time-start_time)/CLOCKS_PER_SEC;

    printf("Time take for bubble sort : %.10lf second \n",time_elapsed1);



    //calculating time for quick sort

    //take starting time
    start_time = clock();

    quick_sort(ara2,0,n2);
    //take ending time
    end_time = clock();

    //calculating bubble sort time
    time_elapsed2=(double)(end_time-start_time)/CLOCKS_PER_SEC;

    printf("Time take for quick sort : %.10lf second \n",time_elapsed2);

    time_diff = (double) (time_elapsed1 - time_elapsed2);

    printf("The time difference between bubble sort and quick sort: %.10lf",time_diff);

    return 0;


}












