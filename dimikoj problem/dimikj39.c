#include<stdio.h>
#include<string.h>
int main()
{
    //freopen("input.txt","rt",stdin);
    //freopen("output.txt","wt",stdout);
    int i,j,T;
    char str1[1000],str2[1000];

    scanf("%d",&T);
    while(T--){
        scanf("%s",str1);
        for(i=strlen(str1)-1,j=0;i>=0;i--){
            str2[j]=str1[i];
            j++;
        }
        str2[j]='\0';
        if(strcmp(str1,str2)==0){
                printf("Yes! It is Palindrome!\n");

        }
        else{
             printf("Sorry! It is not Palindrome!\n");

        }
    }
}
