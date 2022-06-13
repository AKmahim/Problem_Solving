#include<stdio.h>
int main()
{
    int i,j;
    printf("Enter the value of n: ");
    int n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){

            if(j==0 || j==n-1){
                printf("1 ");
            }

            else if(i==0 || i==n-1){
                printf("1 ");
            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }
}


