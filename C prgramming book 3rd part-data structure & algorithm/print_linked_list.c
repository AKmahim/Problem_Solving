#include<stdio.h>
#include<stdlib.h>
//node structure
typedef struct node Node;
struct node{
    int data;
    Node *next;

};
//Node creating function
Node *create_node(int item,Node *next)
{
    Node *new_node = (Node *)(sizeof(Node));
    if(new_node == NULL){
        printf("Error!Could Not  Create New Node.\n");
        exit(1);
    }
    new_node->data=item;
    new_node->next=next;

    return new_node;
}
//prepend function
Node *prepend(Node *head,int item)
{
    Node *new_node = create_node(item,head);

    return new_node;

}
Node *append(int item,Node *head)
{
    Node *new_node = create_node(item,NULL);
    if(head == NULL){
        return new_node;
    }
    Node *current_node= head;
    while(current_node->next != NULL){
        current_node = current_node->next;
    }
    current_node->next =new_node;

    return head;
}

//function for print the Node element

void print_linked_list(Node *head)
{
    Node *current_node = head;
    while(current_node != NULL)
    {
        printf("Data = %d\n",current_node->data);
        current_node = current_node->next;
    }
    printf("\n");
}
int main()
{
    Node *n1,*head;
    n1=create_node(10,NULL);
    head=n1;
    print_linked_list(head);
    head=prepend(head,20);
    print_linked_list(head);
    head=append(head,30);
    print_linked_list(head);
    return 0;
}
