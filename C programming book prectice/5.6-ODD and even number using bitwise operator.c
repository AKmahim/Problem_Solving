#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n & 1){
        printf("%d is odd\n",n);

    }
    else{
        printf("%d is an even number",n);
    }
    return 0;
}
