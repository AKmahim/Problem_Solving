#include<stdio.h>
int main()
{
    int i,j;
    int num1[5][5]={{6,4,7,8,9},{3,7,1,9,9},{8,6,4,2,7},{2,4,2,5,9},{4,1,6,7,3} };
    int num2[5][5];
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            num2[i][j]=num1[j][i];
        }
    }
    for(i=0;i<5;i++){
        int sum=0;
        for(j=0;j<5;j++){
                sum=sum+num2[i][j];
        }
         printf("Sum of Row %d:%d\n",i+1,sum);
    }
    return  0;
}
