#include<stdio.h>
#include<string.h>

int main()
{
    int t,count;
    char *word,s[10002];
    scanf("%d",&t);
    while(t--){
        scanf(" %[^\n]",s);
        word = strtok(s,",!;?. ");
        count=0;
        while(word != NULL){
            if(strlen(word) > 0){
                count++;
            }
            word = strtok(NULL,",!;?. ");
        }
        printf("Count = %d\n",count);
    }
return 0;
}
