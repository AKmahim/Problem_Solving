#include<stdio.h>
#include<stdlib.h>

//Here is the structure for creating Node
typedef struct node Node ;
struct node {
    int data;
    Node *next;

};

//here is the function for creating Node that will return a Node type pointer
Node *creat_node(int item,Node *next)
{
    Node *new_node =(Node *) malloc(sizeof(Node));

    if(new_node == NULL){
        printf("Error! Could Not Creat A New Node\n");
        exit(1);
    }
    new_node->data=item;
    new_node->next=next;
    return new_node;

}

//Main function
int main()
{
    Node *n;
    n=creat_node(10,NULL);
    printf("Data = %d\n",n->data);

}
