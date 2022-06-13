#include<stdio.h>
int main()
{
    int i,j;
    printf("Enter the value of n: ");
    int n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=0;j<n;j++){
            if(j%2 == 0){
                printf("0 ");
            }
            else{
                 printf("1 ");
            }

        }
        printf("\n");
    }
}

