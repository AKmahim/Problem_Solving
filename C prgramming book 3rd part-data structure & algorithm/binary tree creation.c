/*
        _2_
       /   \
      7     9
     / \     \
    1   6     8
       / \   / \
      5  10 3   4


*/
#include<stdio.h>
#include<stdlib.h>
typedef struct node Node;
struct node{
    int data;
    Node *left;
    Node *right;
};

//function for create a Node
Node *Create_node(int data)
{
    Node *new_node = (Node *)malloc(sizeof(Node));
    if(new_node == NULL){
        printf("Node Creation Error!\n");
        exit(1);
    }
    new_node->data=data;
    new_node->left = NULL;
    new_node->right = NULL;

    return new_node;
}
void add_left_child(Node *node,Node *child)
{
    node->left=child;

}

void add_right_child(Node *node,Node *child)
{
    node->right= child;

}


Node *create_tree()
{
    Node *two = Create_node(2);
    Node *seven = Create_node(7);
    Node *nine = Create_node(9);
    add_left_child(two,seven);
    add_right_child(two,nine);

    Node *one = Create_node(1);
    Node *six = Create_node(6);
    add_left_child(seven,one);
    add_right_child(seven,six);

    Node *five = Create_node(5);
    Node *ten = Create_node(10);
    add_left_child(six,five);
    add_right_child(six,ten);

    Node *eight = Create_node(8);
    add_right_child(nine,eight);

    Node *three = Create_node(3);
    Node *four = Create_node(4);
    add_left_child(eight,three);
    add_right_child(eight,four);

    return two;

}

void pre_order(Node *node)
{
    printf("%d ",node->data);

    if(node->left != NULL){
        pre_order(node->left);

    }
    if(node->right != NULL){
        pre_order(node->right);
    }
}

void post_order(Node *node)
{
    if(node->left != NULL){
        post_order(node->left);
    }
    if(node->right != NULL){
        post_order(node->right);

    }
    printf("%d ",node->data);
}

void in_order(Node *node)
{
    if(node->left != NULL){
        in_order(node->left);
    }
    printf("%d ",node->data);

    if(node->right != NULL){
        in_order(node->right);
    }
}

int main()
{
    Node *root = create_tree();

    //printf("%d\n",root->data);
    in_order(root);

    return 0;

}
