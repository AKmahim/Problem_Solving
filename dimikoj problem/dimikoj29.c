#include<stdio.h>
int main()
{
    //freopen("input.txt","rt",stdin);
    //freopen("output.txt","wt",stdout);

    int i,t;
    char ch[2];
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%s",ch);
        //getchar();
        if(ch[0]>=48 && ch[0]<=57){
            printf("Numerical Digit\n");
        }
        else if(ch[0]>=65 && ch[0]<=90){
            printf("Uppercase Character\n");
        }
        else if(ch[0]>=97 && ch[0]<=122){
            printf("Lowercase Character\n");
        }
        else{
            printf("Special Character\n");
        }
    }
    return 0;
}
