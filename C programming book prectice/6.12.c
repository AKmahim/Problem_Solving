#include<stdio.h>

struct s1
{
    int n;
    double d;
    char ch;

};

struct s2
{

    char ch1;
    char ch2;
    char ch3;
    char ch4;
    int n;
    double d;



};



int main()
{
    printf("Char size :%lu bytes\n",sizeof(char));
     printf("Integer size :%lu bytes\n",sizeof(int));
      printf("double size :%lu bytes\n\n",sizeof(double));

      printf("S1 size :%lu bytes\n",sizeof(struct s1));
       printf("S2 size :%lu bytes\n",sizeof(struct s2));

}
