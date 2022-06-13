#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,total_classes;
    int **ara,num[12];
    printf("Enter the number of classes: ");
    scanf("%d",&total_classes);
    ara=(int *)malloc(sizeof(int)*total_classes);
    if(ara==NULL){
            printf("Memory allocation failed");
            return 1;
        }
    for(i=0;i<total_classes;i++){
        printf("Enter the number of student in class %d:",i+1);
        scanf("%d",&num[i]);
        ara[i]=(int *)malloc(sizeof(int)*num[i]);
        if(ara[i]==NULL){
            printf("Memory allocation failed");
            return 1;
        }
        for(j=0;j<num[i];j++){
            printf("Enter the marks for student %d :",j+1);
            scanf("%d",&ara[i][j]);
        }
    }

    for(i=0;i<total_classes;i++){
            printf("Class %d marks:\n",i+1);
        for(j=0;j<num[i];j++){
            printf("The marks of student %d is :%d\n",j+1,ara[i][j]);
        }
        printf("\n");
    }


}
