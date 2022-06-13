#include<stdio.h>
#include<stdlib.h>

//structure for doubly linked list
typedef struct node Node;

struct node {
    int data;
    Node *next;
    Node *prev;

};

//Here is the function for create doubly linked list
Node *create_node(int item,Node *next,Node *prev)
{
    Node *new_node = (Node *)malloc(sizeof(Node));
    if(create_node == NULL){
        printf("Node Creation Error!\n");
        exit(1);

    }
    new_node->data = item;
    new_node->next = next;
    new_node->prev = prev;
}
//Here is the function for prepend any Node in doubly linked list
Node *prepend(int item,Node *head)
{

}


int main()
{
    Node *n1,*n2;
    n1=create_node(45,n2,NULL);
    n2=create_node(32,NULL,n1);

    printf("Data = %d\n",n1->data);
    printf("Data = %d\n",n2->data);

}



