#include<stdio.h>
int linear_search(int x,int n,int ara[])
{
    int i;
    for(i=0;i<n;i++){
        if(ara[i]==x){
            return i; //i is the position of our exect number
        }
    }
    i=-2;
    return -2;  //if we don't find the number return -2
}
int main()
{
    int ara[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int x;
    while(1){
        printf("\nEnter the number that you want to find out: ");
        scanf("%d",&x);

        int pos=linear_search(x,15,ara);
    if(pos== -2){
        printf("\nThe Element %d that you want to find out in the array is not present. \n",x);
    }
    else{
        printf("\nThe Element %d that you want to find out in the array is stay in %d position. \n",x,pos);
    }

    }
    return 0;
}
