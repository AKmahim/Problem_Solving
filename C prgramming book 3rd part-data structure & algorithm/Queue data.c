
#include<stdio.h>

#define Q_SIZE 5

//define the structure
typedef struct
{
    int head,tail;
    int data[Q_SIZE+1];

}Queue;

//here  is enqueue function
void enqueue(Queue *p,int item)
{
    if((p->tail +1) % (Q_SIZE + 1) == p->head){
        printf("Queue is FULL\n");
        return;
    }
    p->data[p->tail] = item;
    p->tail = (p->tail +1) % (Q_SIZE + 1);


}
//here is the function for dequeue
int dequeue(Queue *p)
{
    int item;
    if(p->head == p->tail){
        printf("Queue is Empty\n");
        return -1;
    }
    item = p->data[p->head];
    p->head = (p->head+1) % (Q_SIZE + 1);
    return item;
}

int main()
{
    Queue q;
    q.head=0;
    q.tail=0;

    enqueue(&q,8);
    enqueue(&q,15);
    enqueue(&q,14);
    enqueue(&q,78);
    enqueue(&q,65);

    printf("head :%d tail: %d value:%d \n\n",q.head,q.tail,dequeue(&q));
    printf("head :%d tail: %d value:%d \n\n",q.head,q.tail,dequeue(&q));
    printf("head :%d tail: %d value:%d \n\n",q.head,q.tail,dequeue(&q));
    printf("head :%d tail: %d value:%d \n\n",q.head,q.tail,dequeue(&q));
    printf("head :%d tail: %d value:%d \n\n",q.head,q.tail,dequeue(&q));
    enqueue(&q,45);
    printf("head :%d tail: %d value:%d \n\n",q.head,q.tail,dequeue(&q));



}
