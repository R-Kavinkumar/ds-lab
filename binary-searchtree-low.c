#include <stdio.h>
#include <stdlib.h>

struct BST{
    int data;
    struct BST *left;
    struct BST *right;
};
typedef struct BST NODE;
NODE *node;

NODE *createtree(NODE *node, int data){

    if (node == NULL){
        NODE *temp;
        temp = (NODE *)malloc(sizeof(NODE));
        temp->data = data;
        temp->left = temp->right = NULL;
        return temp;
    }
    if (data < (node->data)){
        node->left = createtree(node->left, data);
    }
    else if (data > node->data){
        node->right = createtree(node->right, data);
    }
    return node;
}
NODE *search(NODE *node, int data){
    if (node == NULL)
        printf("\nElement not found\n");
    else if (data < node->data){
        node->left = search(node->left, data);
    }
    else if (data > node->data){
        node->right = search(node->right, data);
    }
    else{
        printf("\nElement found is: %d\n", node->data);
    }
    return node;
}
void inorder(NODE *node){
    if (node != NULL){
        inorder(node->left);
        printf("\n%d\t\n", node->data);
        inorder(node->right);
    }
}


void main(){
    int data;
    NODE *root = NULL;
    int arr[]={60, 30, 70, 35, 65, 67, 37};
    for (int i = 0; i < 6; i++){
        root = createtree(root, arr[i]);
        }


    printf("\nTree before insertion: \n");
            inorder(root);
    printf("\nEnter the number to insert \n:");
    scanf("%d",&data);
    root = createtree(root, data);
    printf("\nTree after insertion\n");
            inorder(root);
    printf("\nEnter the number to search :\n");
    scanf("%d",&data);
    root = search(root, data);



}


