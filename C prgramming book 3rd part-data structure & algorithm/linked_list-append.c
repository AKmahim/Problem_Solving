 #include<stdio.h>
#include<stdlib.h>
//Function for creating Node structure
typedef struct node Node;

struct node{
    int data;
    Node *next;
};

//function for create_node
Node *create_node(int item,Node *next)
{
    Node *new_node = (Node *)malloc(sizeof(Node));

    if(new_node == NULL){
        printf("Error! Could Not Create New Node.\n");
        exit(1);

    }
    new_node->data=item;
    new_node->next=next;
    return new_node;
}

//function for append
Node *append(int item,Node *head)
{
    Node *new_node = create_node(item,NULL);
    if(head == NULL){
        return new_node;
    }
    Node *current_node =head;

    while(current_node->next != NULL){
        current_node = current_node->next;
    }
    current_node->next = new_node;
    return head;
}
int main()
{
    Node *n1,*n2,*n3,*head;

    n1=create_node(10,n2);
    head=n1;
    n2= create_node(20,NULL);
    head=append(30,head);

    printf("Data = %d\n",n1->data);
    printf("Data = %d\n",n2->data);
    //printf("Data = %d\n",n3->data);

}







