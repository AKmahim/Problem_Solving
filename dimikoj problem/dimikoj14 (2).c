#include<stdio.h>
#include<string.h>
int main()
{
    freopen("input.txt","rt",stdin);
    freopen("output.txt","wt",stdout);

    int T,i,j;
    scanf("%d\n",&T);
    char str[1001];
    char ch[2];
    for(i=1;i<=T;i++){
        gets(str);
        gets(ch);
        int count=0;
        for(j=0;j<strlen(str);j++){
            if(str[j]==ch[0]){
                count=count+1;
            }
        }
        if(count==0){
            printf("'%c' is not present\n",ch[0]);
        }
        else{
            printf("Occurrence of '%c' in '%s' = %d\n",ch[0],str,count);
        }
    }
    return 0;
}

