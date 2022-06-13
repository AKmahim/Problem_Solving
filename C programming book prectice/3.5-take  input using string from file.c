#include<stdio.h>
int main()
{
    FILE *in,*out;
    int a,b,sum;
    char file_in[]="in.txt";
    char file_out[]="out.txt";
    char line[80];

    in=fopen(file_in,"r");
    out=fopen(file_out,"w");

    fgets(line,80,in);
    printf("Line: %s\n",line);

    sscanf(line,"%d %d",&a,&b);
    sum=a+b;
    printf("%d %d %d\n",a,b,sum);
    fprintf(out,"Sum is: %d",sum);

    fclose(in);
    fclose(out);





}
