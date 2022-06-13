#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *mark;
    int i,n;
    printf("Please enter the number of students: ");
    scanf("%d",&n);


    //now allocate memory

    mark = (int *)malloc(sizeof(int) * n );

    printf("Enter the marks for each student: \n");
    for(i=0;i<n;i++){
        scanf("%d",&mark[i]);
    }
    printf("Now here you can see the value: \n");

    //nw print the mark array
    for(i=0;i<n;i++){
        printf("%d\n",mark[i]);
    }


    return 0;


}
