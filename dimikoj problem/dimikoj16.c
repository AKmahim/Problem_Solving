#include<stdio.h>
#include<string.h>
void reverse(char str[])
{
    int i;
    for(i=strlen(str)-1;i>=0;i--){
        printf("%c",str[i]);
    }
    //printf("*");
}
int main()
{
    int i,j,k,T,s_len;
    char s[10002],word[10002];
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf(" %[^\n]",s);
        s_len=strlen(s);
         for(j=0,k=0;j<s_len;j++){
             if(s[j] != ' '){
                 word[k]=s[j];
                 k++;
              }
            else if(k>0){
               word[k]='\0';
               reverse(word);
               printf(" ");
               k=0;
        }
    }
    if(k > 0){
            word[k]= '\0';
            reverse(word);

        }
        printf("\n");
}
   return 0;
}
