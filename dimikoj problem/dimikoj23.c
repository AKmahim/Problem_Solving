#include<stdio.h>
int main()
{
    //freopen("input.txt","rt",stdin);
   //freopen("output.txt","wt",stdout);

    int i,j,T,n;
    scanf("%d\n",&T);
    char s[100];
    for(i=1;i<=T;i++){
        gets(s);
        for(j=0;j<strlen(s);j++){
            n=(s[j]-'A')+1;
            printf("%d",n);
        }
        printf("\n");
    }
    return 0;


}
