#include<stdio.h>
int main()
{
    FILE *fp;

    char filename[]="my_file.txt";

    fp=fopen(filename,"w");

    fprintf(fp,"Hello My name is mahim!\n");
    fprintf(fp,"This file is created by me so I am so happy!\n");
    fclose(fp);
    fp=fopen(filename,"a");
    fprintf(fp,"sjjsksk");
    fclose(fp);

}
