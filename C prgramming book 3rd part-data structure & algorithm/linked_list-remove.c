#include<stdio.h>
#include<stdlib.h>
//Node Structure

typedef struct node Node;
//Node
struct node{
    int data;
    Node *next;

};

//create_node
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

//prepend Node
Node *prepend(int item,Node *head)
{
    Node *new_node = create_node(item,head);

    return new_node;
}

//append Node
Node *append(int item,Node *head)
{
    Node *new_node = create_node(item,NULL);

    if(head == NULL){
        return new_node;
    }

    Node *current_node = head;

    while(current_node->next != NULL){
        current_node = current_node->next;
    }

    current_node->next = new_node;

    return head;
}

//remove node
Node *remove_node(Node *head,Node *node)
{
    if(head == node){
        head=node->next;
        free(node);
        return head;
    }
    Node *current_node =head;
    while(current_node != NULL){
        if(current_node->next == node){
            break;
        }
        current_node=current_node->next;
    }
    if(current_node == NULL){
        return head;
    }
    current_node->next = node->next;

    free(node);

    return head;

}
void print_linked_list(Node *head)
{
    Node *current_node = head;
    if(head == NULL){
        printf("There is no data\n");
        return 0;
    }
    while(current_node != NULL){
        printf("Data = %d\n",current_node->data);
        current_node = current_node->next;
    }
    printf("\n");
}

int main()
{
    Node *n1,*head,*n2;
    n1 = create_node(10,NULL);

    head=n1;
    print_linked_list(head);

    head=prepend(20,head);
    print_linked_list(head);

    head=append(30,head);
    print_linked_list(head);

    head=remove_node(head,n2);
    print_linked_list(head);

    n2=head;
    head = remove_node(head,n2);

    n2=head;
    head=remove_node(head,n2);
    print_linked_list(head);

    return 0;

}




