#include<stdio.h>
#include<stdlib.h>
int main()
{
    freopen("input.txt","rt",stdin);
    freopen("output.txt","wt",stdout);

    int T,i,n;
    char line[1000000];
    char *p,*e;
    long input;
    scanf("%d\n",&T);
    for(i=1;i<=T;i++){
        gets(line);
        int count=0;
        p=line;
        for(p=line; ;p=e){
            input=strtol(p,&e,10);
            if(p==e){
                break;
            }
            count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
