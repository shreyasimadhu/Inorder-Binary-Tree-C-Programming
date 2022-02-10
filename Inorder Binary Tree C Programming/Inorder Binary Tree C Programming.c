#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node* left;
    struct node* right;
};
 
/* Helper function */
struct node* newNode(int data)
{
    struct node* node
        = (struct node*)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
 
    return (node);
}
 
/* Given a binary tree, in inorder*/
void printInorder(struct node* node)
{
    if (node == NULL)
        return;
 
    /*  left child */
    printInorder(node->left);
 
    /* the root node */
    printf("%d ", node->data);
 
    /* right child */
    printInorder(node->right);
}
 
/* Driver program to test functions*/
int main()
{   
    int v1,v2,v3,v4,v5;
    
    printf("\nEnter Integer Five Value = \n");
    scanf("%d",&v1);
    scanf("%d",&v2);
    scanf("%d",&v3);
    scanf("%d",&v4);
    scanf("%d",&v5);
    
    struct node* root = newNode(v1);
    root->left = newNode(v2);
    root->right = newNode(v3);
    root->left->left = newNode(v4);
    root->left->right = newNode(v5);

    printf("\nInorder traversal of binary tree is \n");
    printInorder(root);
    
    getchar();
    return 0;
}
