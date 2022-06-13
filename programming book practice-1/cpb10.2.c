#include<stdio.h>
#include<math.h>
int prime(int n)
{
    int i,root;
    if(n<2){
        return 0;
    }
    if(n==2){
        return 1;
    }
    if(n%2==0){
        return 0;
    }
    root = sqrt(n);
    for(i=3;i<=root;i=i+2){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n,T,i;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%d",&n);
        if(prime(n)==1){
        printf("%d eh primo\n",n);

       }
        else{
        printf("%d nao eh primo\n",n);
       }
    }

}

