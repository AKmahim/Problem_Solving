#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *in,*out;
    char file_in[]="image1.txt";
    char file_out[]="image2.txt";
    int ch;
    in=fopen(file_in,"r");
    if(in==NULL){
        perror("File opening failed");
        return EXIT_FAILURE;
    }
    out=fopen(file_out,"a");

    while(1){
        ch=fgetc(in);
        if(ch== EOF){
            break;
        }
        fputc(ch,out);
    }

    fclose(in);
    fclose(out);


}
