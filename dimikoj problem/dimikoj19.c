#include<stdio.h>
#include<string.h>
int main()
{
    //freopen("input.txt","rt",stdin);
    //freopen("output.txt","wt",stdout);

    int i,T,j;
    char str[10000];
    scanf("%d\n",&T);
    for(i=1;i<=T;i++){
        gets(str);
        int c=0;
        for(j=0;j<strlen(str);j++){
            if(str[j]==' '){
                c=c+1;
            }

        }
        printf("Count = %d\n",c+1);
    }
    return 0;

}


