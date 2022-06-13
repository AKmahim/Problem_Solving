#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *mark;
    int i,n;
    printf("Please enter the number of student: ");
    scanf("%d",&n);

    // now allocate the memory
    mark=(int *)malloc(sizeof(int)*n);
    for(i=0;i<n;i++){
        scanf("%d",&mark[i]);
    }
    //now print the value
    for(i=0;i<n;i++){
        printf("%d\t",mark[i]);
    }
    free(mark);

}
