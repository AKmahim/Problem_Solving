#include<stdio.h>
int main()
{
    FILE *in;
    int return_value;
    char file_in[]="image2.jpg";
    //fopen(file_in,)
    return_value=remove(file_in);

    if(return_value !=0){
        perror("File opening failed");
        return 1;
    }
    printf("%s removed successfully\n",file_in);

    //now try to remove again
    return_value = remove(file_in);
    if(return_value !=0){
        perror("File opening failed");
        return 1;
    }
    printf("%s removed successfully\n",file_in);

    return 0;

}
