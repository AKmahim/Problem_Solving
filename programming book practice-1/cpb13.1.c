#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char str1[100],str2[100];
    scanf("%s",str1);
    for(i=0,j=strlen(str1)-1;str1[i] != '\0' ;i++,j--){
        str2[j]=str1[i];
    }
    str2[i]='\0';
    if(0==strcmp(str1,str2)){
        printf("YES, %s is  a pelindrom\n",str1);
    }
    else{
        printf("NO, %s is not a pelindrom\n",str1);
    }
}
