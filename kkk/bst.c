#include<stdio.h>
#include<stdlib.h>
#define MIN -9999

typedef struct BSTNode
{ 
    int data;
    struct BSTNode *left;
    struct BSTNode *right;
} BSTNode;

void init_BST(BSTNode **root);
void add_node(BSTNode **root, int x);
void inorder(BSTNode *root);
void preorder(BSTNode *root);
void postorder(BSTNode *root);
int delete_BST(BSTNode **root, int x);
int findMinimum(BSTNode *root);
int findMaximum(BSTNode *root);
int findKthMinimum(BSTNode *root, int k);
int findKthMaximum(BSTNode *root, int k);
int findInorderSuccessor(BSTNode *root, int x);
int findInorderPredecessor(BSTNode *root, int x);
int countNodes(BSTNode *root);

int main()
{
    BSTNode *root; 
    int x, choice, deleted_element;
    init_BST(&root);

    while(1)
    {   
        scanf("%d", &choice);

        if(choice == 0)
        {
            init_BST(&root);
        }
        else if(choice == 1)
        {
            scanf("%d", &x);
            add_node(&root, x);
        }
        else if(choice == 2)
        {
            inorder(root);
            printf("\n");
        }
        else if(choice == 3)
        {
            preorder(root);
            printf("\n");
        }
        else if(choice == 4)
        {
            postorder(root);
            printf("\n");
        }
        else if(choice == 5)
        {
            // Search an element x
            continue;
        }
        else if(choice == 6)
        {
            // Delete an element x
            scanf("%d", &x);
            deleted_element = delete_BST(&root, x);
            printf("%d\n", deleted_element);
        }
        else if(choice == 7)
        {
            // Find the minimum element
            int minimum = findMinimum(root);
            printf("Minimum: %d\n", minimum);
        }
        else if(choice == 8)
        {
            // Find the maximum element
            int maximum = findMaximum(root);
            printf("Maximum: %d\n", maximum);
        }
        else if(choice == 9)
        {
            // Find the kth minimum element
            int k;
            scanf("%d", &k);
            int kthMinimum = findKthMinimum(root, k);
            printf("Kth Minimum: %d\n", kthMinimum);
        }
        else if(choice == 10)
        {
            // Find the kth maximum element
            int k;
            scanf("%d", &k);
            int kthMaximum = findKthMaximum(root, k);
            printf("Kth Maximum: %d\n", kthMaximum);
        }
        else if(choice == 11)
        {
            // Find the inorder successor
            scanf("%d", &x);
            int successor = findInorderSuccessor(root, x);
            if(successor != MIN)
                printf("Inorder Successor: %d\n", successor);
            else
                printf("Inorder Successor not found\n");
        }
        else if(choice == 12)
        {
            // Find the inorder predecessor
            scanf("%d", &x);
            int predecessor = findInorderPredecessor(root, x);
            if(predecessor != MIN)
                printf("Inorder Predecessor: %d\n", predecessor);
            else
                printf("Inorder Predecessor not found\n");
        }
        else
            break;
    }
    return 0;
}

void init_BST(BSTNode **root)
{
    (*root) = NULL; 
}

void add_node(BSTNode **root, int x)
{
    struct BSTNode* new = (struct BSTNode*)malloc(sizeof(struct BSTNode));
    if (*root == NULL)
    {
        (*root) = new;
        new->data = x;
    }
    else
    {
        if ((*root)->data < x)
            add_node(&(*root)->right, x);
        else if ((*root)->data > x)
            add_node(&((*root)->left), x);
        else if ((*root)->data == x)
            printf("DUPLICATE ELEMENT %d NOT INSERTED\n", x);
    }
}

void inorder(BSTNode *root)
{
    if (root == NULL)
        return;

    inorder(root->left);
    printf("%d, ", root->data);
    inorder(root->right);
}

void preorder(BSTNode *root)
{
    if (root == NULL)
        return;

    printf("%d, ", root->data);
    preorder(root->left);
    preorder(root->right);
}

void postorder(BSTNode *root)
{
    if (root == NULL)
        return;

    postorder(root->left);
    postorder(root->right);
    printf("%d, ", root->data);
}

int delete_BST(BSTNode **root, int x)
{
    if (*root == NULL)
        return MIN;
    else if (x < (*root)->data)
        return delete_BST(&(*root)->left, x);
    else if (x > (*root)->data)
        return delete_BST(&(*root)->right, x);
    else
    {
        BSTNode *temp;
        int del = (*root)->data;

        if ((*root)->left == NULL)
        {
            temp = *root;
            *root = (*root)->right;
            free(temp);
        }
        else if ((*root)->right == NULL)
        {
            temp = *root;
            *root = (*root)->left;
            free(temp);
        }
        else
        {
            BSTNode *minrt = (*root)->right;
            BSTNode *minrtp = (*root);

            while (minrt->left != NULL)
            {
                minrtp = minrt;
                minrt = minrt->left;
            }

            (*root)->data = minrt->data;

            if (minrtp == (*root))
                (*root)->right = minrt->right;
            else
                minrtp->left = minrt->right;

            free(minrt);
        }
        return del;
    }
}

int findMinimum(BSTNode *root)
{
    if (root == NULL)
        return MIN;
    else if (root->left == NULL)
        return root->data;
    else
        return findMinimum(root->left);
}

int findMaximum(BSTNode *root)
{
    if (root == NULL)
        return MIN;
    else if (root->right == NULL)
        return root->data;
    else
        return findMaximum(root->right);
}

int findKthMinimum(BSTNode *root, int k)
{
    if (root == NULL)
        return MIN;
    
    int leftCount = countNodes(root->left);
    
    if (k == leftCount + 1)
        return root->data;
    else if (k <= leftCount)
        return findKthMinimum(root->left, k);
    else
        return findKthMinimum(root->right, k - leftCount - 1);
}

int findKthMaximum(BSTNode *root, int k)
{
    if (root == NULL)
        return MIN;
    
    int rightCount = countNodes(root->right);
    
    if (k == rightCount + 1)
        return root->data;
    else if (k <= rightCount)
        return findKthMaximum(root->right, k);
    else
        return findKthMaximum(root->left, k - rightCount - 1);
}

int findInorderSuccessor(BSTNode *root, int x)
{
    if (root == NULL)
        return MIN;
    
    int successor = MIN;
    
    while (root != NULL)
    {
        if (x < root->data)
        {
            successor = root->data;
            root = root->left;
        }
        else if (x >= root->data)
            root = root->right;
    }
    
    return successor;
}

int findInorderPredecessor(BSTNode *root, int x)
{
    if (root == NULL)
        return MIN;
    
    int predecessor = MIN;
    
    while (root != NULL)
    {
        if (x <= root->data)
            root = root->left;
        else if (x > root->data)
        {
            predecessor = root->data;
            root = root->right;
        }
    }
    
    return predecessor;
}

int countNodes(BSTNode *root)
{
    if (root == NULL)
        return 0;
    
    return countNodes(root->left) + countNodes(root->right) + 1;
}
