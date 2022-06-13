#include<stdio.h>
#include<stdlib.h>
int compare(const void *a,const void *b)
{
    return (*(int*)b-*(int *)a);
}
int main()
{
    int i,n=5;
    int ara[]={65,6,100,1,250};

    qsort(ara,5,sizeof(int),compare);

    for(i=0;i<n;i++)
    {
        printf("%d  ",ara[i]);
    }
    printf("\n");
}
