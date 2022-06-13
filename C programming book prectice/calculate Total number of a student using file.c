#include<stdio.h>
#include<stdlib.h>
int total(int a,int b)
{
    return (a+b)/2;
}
int main()
{
    FILE *in_bangla,*in_math,*out;
    int r1,r2,b,m,i,j;

    char file_bangla[]="bangla.txt";

    char file_math[]="math.txt";
    char file_total[]="total.txt";

    in_bangla=fopen(file_bangla,"r");

    in_math=fopen(file_math,"r");
    out=fopen(file_total,"a");


    fprintf(out,"The average number of the student (bangla & math)\n");
    for(i=0;i<10;i++){
        fscanf(in_bangla,"%d %d",&r1,&b);
        fscanf(in_math,"%d %d",&r2,&m);
        fprintf(out,"%d %d\n",r1,total(b,m));
    }
    fclose(in_bangla);
    fclose(in_math);
    fclose(out);
    return 0;




}
