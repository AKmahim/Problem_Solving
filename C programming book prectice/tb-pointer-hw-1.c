#include<stdio.h>
int main()
{
    int n[10];
    int i,even_sum=0,odd_sum=0;
    for(i=0;i<10;i++){
        scanf("%d",&n[i]);
    }
    for(i=0;i<10;i++){
            printf("%d",n[i]);
        if(n[i]%2==0){
            even_sum=even_sum+n[i];
        }
        else{
            odd_sum=odd_sum+n[i];
        }
    }
    printf("\n");
    printf("Even sum:%d\n",even_sum);
    printf("Odd sum:%d\n",odd_sum);
    return 0;

}
