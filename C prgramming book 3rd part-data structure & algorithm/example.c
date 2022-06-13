#include<stdio.h>
//stack data structure
#define max 5
typedef struct{
    int top;
    int data[max];
}Stack;

void push(Stack *s,int item)
{
    if(s->top < max){
        s->data[s->top] = item;
        s->top = s->top + 1;
    }
    else{
        printf("Stack is Full.\n");
    }
}
int pop(Stack *s)
{
    int item;
    if(s->top == 0){
        printf("Stack is Empty\n");
        return -1;
    }
    else{
        s->top = s->top -1;
        item = s->data[s->top];
        return item;
    }

}


int main()
{
    Stack s;
    int item;
    s.top=0;
    push(&s,15);
    push(&s,25);
    push(&s,35);
    push(&s,45);
    push(&s,55);
    push(&s,65);

   printf("data = %d\n",pop(&s));
   printf("data = %d\n",pop(&s));
   printf("data = %d\n",pop(&s));
   printf("data = %d\n",pop(&s));
   printf("data = %d\n",pop(&s));
   printf("data = %d\n",pop(&s));




}
