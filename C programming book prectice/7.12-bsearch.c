#include<stdio.h>
#include<stdlib.h>
int compare(const void *a,const void *b)
{
    return (*(int*)a-*(int*)b);
}
int main()
{
    int i,n=5,key,*item;
    int ara[]={1,2,3,4,5};

    while(1){
        printf("Enter the value of the key(0 to exit): ");
        scanf("%d",&key);
        if(key==0){
            break;
        }

        item=(int *)bsearch(&key,ara,n,sizeof(int),compare);
        if(item != NULL){
            printf("Item found: %d\n",*item);

        }
        else{
            printf("Item not found in array\n");
        }



    }
}
