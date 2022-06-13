#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    time_t t;
    srand(t);
    int i;
    for(i=0;i<5;i++){
        printf("%d\t",rand());
    }
    return 0;
}
