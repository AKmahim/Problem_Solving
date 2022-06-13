#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *in;
    char *file_in ="image1.jpg";
    in=fopen(file_in,"rb");

    if(in==NULL){
        perror("File opening failed");
        return EXIT_FAILURE;

    }

    fseek(in,0,SEEK_END);

    printf("File size : %ld bytes\n",ftell(in));

    printf("File size (kiloBytes) :%ld\n",ftell(in)/1024);
    fclose(in);
    return 0;


}
