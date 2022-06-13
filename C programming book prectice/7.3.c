#include<stdio.h>
int main()
{
    int i,j,n;
    int *ara[5],num[5];

    for(i=0;i<5;i++){
        printf("Enter the number of students for class %d :",i+1);
        scanf("%d",&num[i]);
        //num[i]=n;
        ara[i]=(int *)malloc(sizeof(int)*n);
        if(ara[i]==NULL){
            printf("Memory allocation failed\n");
            return 1;
        }

        for(j=0;j<n;j++){
        printf("Enter marks for student %d: ",j+1);
        scanf("%d",&ara[i][j]);
    }

    }
    printf("OUTPUT: \n");

    for(i=0;i<5;i++){
            printf("Class %d:",i+1);
        for(j=0;j<num[i];j++){
            printf("%4d",ara[i][j]);

        }
    printf("\n");
    }


}
