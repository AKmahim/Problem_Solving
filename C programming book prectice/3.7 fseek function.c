#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *in;
    in=fopen("in.txt","r");
    if(in==NULL){
        perror("Can't open file");
        return EXIT_FAILURE;
    }
    int ch;

    ch=fgetc(in);
    printf("%c\n",(char)ch);
    ch=fgetc(in);
    printf("%c\n",(char)ch);

    fseek(in,2,1);
    //printf("File size : %ld bytes\n",ftell(in));

    ch=fgetc(in);
    printf("%c\n",(char)ch);
    fclose(in);

    return 0;


}
