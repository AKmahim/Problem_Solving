#include<stdio.h>

void recurse()
{
    static int s=1;
    if(s > 5){
        return;
    }
    printf("count :%d\n",s);
    recurse(s=s+1);
    printf("count :%d\n",s);
    return 0;
}

int main()
{
    recurse();
    return 0;
}
