#include<stdio.h>
#include<string.h>
int main()
{
    int i,t=4;
    char name[20];

    while(t--){
        printf("Please enter your password to Login: ");
        scanf("%s",name);
        if(0==strcmp(name,"Tristan")){
            printf("Log-on Successful\n");
            break;
        }
        if(t ==1){
            printf("Access Denied\n");
            break;
        }
    }
    return 0;
}
