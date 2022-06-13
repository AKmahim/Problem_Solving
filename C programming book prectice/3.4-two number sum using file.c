#include<stdio.h>
int main()
{
    FILE *in,*out;
    int a,b,sum;

    char in_file[]="input.txt";
    char out_file[]="output.txt";

    in=fopen(in_file,"r");
    out=fopen(out_file,"w");

    fopen(in,"r");
    fopen(out,"w");

    fscanf(in,"%d %d",&a,&b);
    sum=a+b;
    fprintf(out,"Sum is: %d",sum);

    fclose(in);
    fclose(out);


}
