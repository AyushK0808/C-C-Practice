#include <stdio.h>
#include <stdlib.h>

struct BSTnode(
    struct BSTnode *leftchild;
    int data;
    struct BSTnode *rightchild;
)

void addnode(struct BSTnode **node, int n);
void delnode(struct BSTnode **node, int n);
int maxelement(struct BSTnode **node);
int minelement(struct BSTnode **node);
int successor(struct BSTnode **node);
int predecessor(struct BSTnode **node);
int kmax(struct BSTnode **node, int k);
int kmin(struct BSTnode **node, int k);

void addnode(struct BSTnode **node, int n){
    if (*node==NULL){
        *node=(struct BSTnode *)malloc(sizeof(struct BSTnode));
        *node ->leftchild=NULL;
        *node ->rightchild=NULL;
        *node->data=n;
    }
    else{
        if (n<(*node->data)){
            addnode(*node->leftchild,num);
        }
    }
}