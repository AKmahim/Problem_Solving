#include<stdio.h>
int main()
{
    char *c,ch='M';
    int *i,n=10;
    double *d,lf=12.52;

    c=&ch;
    i=&n;
    d=&lf;

    printf("Size of char :%d bytes\n",sizeof(char));
    printf("c :%p\n",c);
    printf("c+1 :%p\n",c+1);
    printf("c+2 :%p\n",c+2);

    printf("\nSize of int : %d bytes\n",sizeof(int));
    printf("i :%p\n",i);
    printf("i+1 :%p\n",i+1);
    printf("i+2 :%p\n",i+2);

    printf("\nSize of double : %d bytes\n",sizeof(double));
    printf("d :%p\n",d);
    printf("d+1 :%p\n",d+1);
    printf("d+2 :%p\n",d+2);




}
