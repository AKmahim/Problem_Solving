#include<stdio.h>
#include<string.h>
int main()
{
    struct student {
        int id;
        char name[40];

    };
    struct student one;

    one.id=1;
    strcpy(one.name,"Mahim Hossen");
    printf("ID:%d\n",one.id);
    printf("Name:%s\n",one.name);

}

