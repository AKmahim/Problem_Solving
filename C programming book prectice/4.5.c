#include<stdio.h>

void recurse()
{
    char *s="We love our country!";
    printf("%s\n",s);
    recurse();
}

int main()
{
    recurse();
    return 0;

}
