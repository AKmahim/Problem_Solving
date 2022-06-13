#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int i;
    time_t t;
    srand ((unsigned) time(&t));

    for(i=0;i<5;i++){
        printf("%d\t",rand());
    }
}
