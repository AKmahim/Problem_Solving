#include<stdio.h>
#include<string.h>
int main()
{
    int i,n;
    char ara[30];
    printf("Enter a decimal number to convert it into binary: ");
    scanf("%d",&n);
    int a=n;
    for(i=0;i<30;i++){
        ara[i]=0;
    }
    for(i=0;n !=0;i++){
        if(n%2 == 0){
            n=n/2;
        }
        else{
            ara[i]++;
            n=n/2;
        }
    }
    printf("The binary number of %d is: ",a);
      for(i=strlen(ara);i>=0;i--){
         printf("%c",ara[i]);
      }

}
