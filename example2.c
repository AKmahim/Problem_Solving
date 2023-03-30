#include<stdio.h>
#include<stdlib.h>
int main()
{
    int T,n;
    scanf("%d",&T);
    int i,j;
    for(i=0;i<T;i++){
        scanf("%d",&n);
        int lower = 0;
        int n2;
        int ran = (rand() % (n - lower+1)) + lower;
        if(n == 0){
            printf("0 0\n");
        }
        else{
            if(ran > 10){
                int n2 =ran -10;
                printf("%d %d\n",10,n-ran+n2);
            }
            else{
                printf("%d %d\n",ran,n-ran);
            }

        }
    }
}
