#include<stdio.h>

int main()
{
    int ara[101];
    int n, t, i, k;
    char c = ' ';


    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);

        for(i=0; i<n; i++)
            scanf("%d", &ara[i]);

        for(i=k=0; i<n; i+=2){

            printf("%d", ara[i]);
            if(k=i+2<n)
                printf("%c", c);

        }
           printf("\n");
    }
    return 0;
}
