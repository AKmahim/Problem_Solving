#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int i,p;
    char n[100];
    printf("Enter a Biinary number to conver it into decimal: ");
    gets(n);
    int d=0;
    int len=strlen(n);
    //printf("%d\n",len);
    //printf("%c\n",n[0]+5);
   // printf("%d\n",pow(2,2));
    for(i=0,p=len-1;i<len;i++){
        d=d+(n[i]-'0')* pow(2,p);
        p--;
    }
    printf("The decimal of %s is : %d",n,d);
    return 0;


}
