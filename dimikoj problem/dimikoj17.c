#include<stdio.h>
#include<string.h>
int main()
{
    //freopen("input.txt","rt",stdin);
    //freopen("output.txt","wt",stdout);

    int i,T,j;
    char str[1000];
    scanf("%d\n",&T);
    for(i=1;i<=T;i++){
        gets(str);
        int c=0;
        for(j=0;j<strlen(str);j++){
            if(str[j]=='a' || str[j]=='e' || str[j]=='i' || str[j]=='o' || str[j]=='u'){
                c=c+1;
            }
            else if(str[j]=='A' || str[j]=='E' || str[j]=='I' || str[j]=='O' || str[j]=='U'){
                c=c+1;
            }

        }
        printf("Number of vowels = %d\n",c);
    }

}

