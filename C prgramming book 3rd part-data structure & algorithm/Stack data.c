#include<stdio.h>

//declare a structure for stack data structure
#define Stack_Max 10
typedef struct {
    int top;
    int data[Stack_Max];


    }Stack;


//top function
int top(Stack *s)
{
    int item;
    if(s->top == 0){
        printf("The array is emty\n");
        return -1;
    }
    else{
        s->top =s->top -1;
        item=s->data[s->top];

         return item;
    }
}
//push function
void push(Stack *s,int item)
{
    if(s->top < Stack_Max){

        s->data[s->top] = item;
        s->top =s->top +1;
    }
    else{
        printf("Stack is Full\n");
    }
}

//main function

int main()
{
    int item;
    Stack my_stack;
    my_stack.top=0;

    //push input
    push(&my_stack,1);
    push(&my_stack,2);
    push(&my_stack,3);

    item =top(&my_stack);
    printf("%d\n",item);

    item =top(&my_stack);
    printf("%d\n",item);

    item =top(&my_stack);
    printf("%d\n",item);

}


