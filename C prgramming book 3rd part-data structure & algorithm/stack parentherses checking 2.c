#include<stdio.h>
#include<string.h>

//Here is the function for checking the parentheses is balanced

int check(char input[])
{
    char Stack[100],last_char;
    int top=0;
    int i,len;
    char ch;
    len=strlen(input);
    for(i=0;i<len;i++){
            ch=input[i];
        if(input[i] == '(' || input[i] == '{' ){
            Stack[top] = ch;
            top++;
           }

        else if(input[i] == ')' ){

            if(top == 0){
                //Stack is empty
                return 0;
            }

            top--;
            last_char = Stack[top];
            if(last_char != '(' ){
                return 0;
               }
        }

        else if(input[i] == '}' ){

            if(top == 0){
                //Stack is empty
                return 0;
            }

            top--;
            last_char = Stack[top];
            if(last_char != '{' ){
                return 0;
               }
        }
    }
    if(top==0){
        return 1;
    }
    else{
       return 0;
    }
}

int main()
{
    char input[40];
    scanf("%s",input);

    if(check(input)){
        printf("%s is balanced\n");

    }
    else{
        printf("%s is not balanced\n");
    }
    return 0;

}

