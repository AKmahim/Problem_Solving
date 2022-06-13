#include<stdio.h>
int main()
{
    int i,j;
    printf("Enter the value of n: ");
    int n;
    scanf("%d",&n);
    int p=(n +1)/2;
    if(n%2 == 0){
        p=n/2;
    }
    else{
        p=(n+1)/2;
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==p && j==p){
                printf("0 ");
            }
            else{
                 printf("1 ");
            }

        }
        printf("\n");
    }
}

