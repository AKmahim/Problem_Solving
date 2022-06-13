#include<stdio.h>


int binary_search(int ara[],int l,int r,int x)
{
    int mid;
    if(r>=l){
        mid = (l+r)/2;
        if(ara[mid] == x){
            return mid;
        }
        if(x < ara[mid]){
            return binary_search(ara,l,mid,x);

        }
        else{
            return binary_search(ara,mid,r,x);
        }
    }
    return -1;
}










int main()
{
    int ara[1005];
    int x,n,i;
    printf("Enter the amount of element you want to insert in array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&ara[i]);
    }


        printf("\nEnter the number that you want to find in array : ");
        scanf("%d",&x);
        int res=binary_search(ara,0,n,x);
        if(res==-1){
            printf("\nThe number is not find in the array.\n");
        }
        else{
            printf("The number that your want to find is stay in the position number : %d",res);

        }

}

