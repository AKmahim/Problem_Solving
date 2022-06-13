#include<stdio.h>

void recurse(int count)
{
    if(count == 5){
        return;
    }
    printf("count:%d\n",count);
    recurse(count+1);
    //printf("\n");
    printf("count:%d\n",count);
    return;

}

int main()
{
    recurse(1);
    return 0;

}


