#include<stdio.h>
int main()
{
    int i,j;
     int namta[10][10];
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            namta[i][j]=(i+1)*(j+1);
        }
    }
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            printf("%d X %d = %d\n",i+1,j+1,namta[i][j]);
        }
        printf("\n\n");
    }

}
