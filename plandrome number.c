#include<stdio.h>
int ara[101];


int reverse(int n)
{
    int rev;
    rev=0;
    while(n !=0){
          rev=rev*10;
          rev=rev+n%10;
           n=n/10;
        }
    return rev;
}

void check()
{
    int i,j;
    i=0;
    j=0;
    int n;
    while(1){
        n = reverse(i);
        if(n == i){
            if(j == 100){
                return ;
            }
            ara[j]=i;
            j++;
        }
        i++;
    }
}


int main()
{
    check();
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int num;
    num = ara[n-1];
    printf("%dth palindrome number is: %d\n",n,num);
    return 0;
}

