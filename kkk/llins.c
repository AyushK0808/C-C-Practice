#include<stdio.h>
#include<stdlib.h>

typedef struct ListNode{
    int data;
    struct ListNode *next;
} ListNode;

void init_link_list(ListNode **head);
void insertAtBeg(ListNode **head, int x);
void insertAtLast(ListNode **head, int x);
void printList(ListNode *head);


int main()
{
    ListNode *head;
    int choice=0, x;
    init_link_list(&head);
    while(1)
    {   
        scanf("%d", &choice);
        //printf("Choice=%d\n", choice);
        // For initialization of link list
        if(choice==0)
        {
                init_link_list(&head);
                // printf("head=%p\n", head);
        }
        else if(choice==1)
        {      // insert at begining
               
                scanf("%d", &x);
                insertAtBeg(&head, x);
             
        }
        else if(choice==2)
        {
                // insert at last
                scanf("%d", &x);
                insertAtLast(&head, x);
                
               
        }
        else if(choice==3)
        {
                // print link list elements seperated by comma and space
                printList(head);
                
        }
        else
            break;
    }
    return 0;
}

void init_link_list(ListNode **head){
     (*head) = NULL;
}

// Function to insert element at begining
void insertAtBeg(ListNode **head, int x)
{
    struct ListNode *new;
    new=(struct ListNode *)malloc(sizeof(struct ListNode));
    new->data=x;
    new->next=*head;
    *head=new;
}

void printList(ListNode *head)
{
    struct ListNode *temp;
    temp=head;
    printf("%d",temp->data);
    temp=temp->next;
    while (temp!=NULL){
        printf(", %d",temp->data);
        temp=temp->next;
    }
}

// Function to insert element at last
void insertAtLast(ListNode **head, int x)
{
    struct ListNode *new,*temp;
    new=(struct ListNode*)malloc(sizeof(struct ListNode));
    new->data=x;
    if (*head==NULL){
        new->next=NULL;
        *head=new;
    }
    else{
        temp=*head;
        while (temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=new;
        new->next=NULL;
    }
}