#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,t,len;
    char s[102],v[102],con[102],ch;
    scanf("%d",&t);
    while(t--){
        scanf(" %[^\n]",s);
        len=strlen(s);
        j=k=0;
        for(i=0;i<len;i++){
            ch=s[i];
            if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z'){
                if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
                    v[j] = ch;
                    j++;
            }
                else{
                    con[k] = ch;
                    k++;
            }
            }
        }
        v[j]='\0';
        con[k]='\0';
        printf("%s\n",v);
        printf("%s\n",con);
    }
}
