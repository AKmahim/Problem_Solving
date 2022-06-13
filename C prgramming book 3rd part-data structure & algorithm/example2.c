#include<stdio.h>
#include<stdlib.h>
typedef struct node Node;

struct node {
    int data;
    Node *next;

};


Node *Create_node(int item,Node *next)
{
   Node *new_node = (Node *)malloc(sizeof(Node));
   if(new_node == NULL){
    printf("Error!Could not create new node\n");
    exit(1);
   }
   new_node->data=item;
   new_node->next=next;

   return new_node;
}
Node *prepend(int item,Node *head)
{
    Node *new_node = Create_node(item,head);
    return new_node;
}

//function for print node
Node *print_list(Node *head)
{
    Node *current_node =head;
    //current_node = current_node->next;
    while(current_node != NULL)
    {
        printf("%d\n",current_node->data);
        current_node = current_node->next;
    }
    printf("\n");
}



int main()
{
    Node *head = NULL;
    int i,T,item;
    scanf("%d",&T);
    for(i=0;i<T;i++){
        scanf("%d",&item);
        head =prepend(item,head);

    }
    print_list(head);



}

