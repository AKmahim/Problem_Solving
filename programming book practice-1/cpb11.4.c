#include<stdio.h>
#include<string.h>
int main()
{
    char saarc[7][100]={"Bangladesh","India","Nepal","Bhutan","Sri lanka","Maldives","Pakistan" };
    int row,col;
    for(row=0;row<7;row++){
        for(col=0;col<strlen(saarc[row]);col++){
            printf("Index (%d,%d)=%c\t",row,col,saarc[row][col]);
        }
        printf("\n");
    }
    return 0;
}
