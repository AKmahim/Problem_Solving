#include<stdio.h>
#include<string.h>
int main()
{
    freopen("input.txt","rt",stdin);
    freopen("output.txt","wt",stdout);

    int T,i,j;
    scanf("%d\n",&T);
    char str[100000];
    for(i=1;i<=T;i++){
        gets(str);
        for(j=strlen(str)-1;j>=0;j--){
            printf("%c",str[j]);
        }
        printf("\n");

    }
    return 0;
}
