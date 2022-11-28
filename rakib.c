#include<stdio.h>

int main()
{
    char message[100],msg2[100], ch;
    int i, key=1;
    printf("Input Your message: ");
    gets(message);
    strcpy(msg2,message);
    for(i = 0; message[i] != '\0'; ++i){
        ch = message[i];
        if(ch >= 'a' && ch <= 'z'){
            ch = ch + key;
            if(ch > 'z'){
            ch = ch - 'z' + 'a' - 1;
            }
            message[i] = ch;
        }
        else if(ch >= 'A' && ch <= 'Z'){
            ch = ch + key;
            if(ch > 'Z'){
            ch = ch - 'Z' + 'A' - 1;
            }
            message[i] = ch;
        }
    }
    printf("\nEncrypted message: %s", message);
    printf("\nDecrypted message: %s", msg2);

    return 0;
}
