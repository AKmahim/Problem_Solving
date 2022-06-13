#include<stdio.h>
//binary search function

int binary_search(int ara[],int n,int x)
{
    int left,right,mid;
    left=0;
    right=n-1;
    while(left <= right)
    {
        mid=(left+right)/2;
        if(ara[mid]==x){
            return mid;
        }
        if(ara[mid] < x){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    return -1;
}

//here is the main function
int main()
{
    int ara[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int x;
    int n;

    while(1){
        printf("\nEnter the number that you want to find in array : ");
        scanf("%d",&x);
        n=binary_search(ara,20,x);
        if(n==-1){
            printf("\nThe number is not find in the array.\n");
        }
        else{
            printf("The number that your want to find is stay in the position number : %d",n);
    }
        }

}

