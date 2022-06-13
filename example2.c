#include<stdio.h>


typedef struct
{
    int max;
    int min;

}Pair;

Pair getMinMax(int ara[],int low,int high)
{
    Pair minmax,mmleft,mmright;
    int mid;
    //if there is only one element
    if(low == high){
        minmax.max = ara[low];
        minmax.min = ara[low];
        return minmax;
    }

    // if there is two element
    if(high == low+1){
        if(ara[low]>ara[high]){
            minmax.max = ara[low];
            minmax.min = ara[high];

        }
        else{
            minmax.max = ara[high];
            minmax.min = ara[low];
        }
        return minmax;
    }

    // if there is more than 2 element

    mid = (low + high)/2;
    mmleft = getMinMax(ara,low,mid);
    mmright = getMinMax(ara,mid+1,high);

    //check for both minimum case
    if(mmleft.min < mmright.min){
        minmax.min = mmleft.min;
    }
    else{
        minmax.min = mmright.min;
    }

    //check for both maximum case
    if(mmleft.max > mmright.max)
    {
        minmax.max = mmleft.max;

    }
    else{
        minmax.max = mmright.max;
    }

    return minmax;
}

int main()
{
    int n,i,ara[1002];
    printf("Enter the element amount of array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&ara[i]);
    }
    Pair minmax = getMinMax(ara,0,n-1);
    printf("Minimum element is: %d \n",minmax.min);
    printf("Maximum element is : %d",minmax.max);

    return 0;
}













