#include<stdio.h>
#include<stdlib.h>

typedef struct ListNode{
    int data;
    struct ListNode *next;
} ListNode;

void init_link_list(ListNode **head);
void insertAtBeg(ListNode **head, int x);
void insertAtLast(ListNode **head, int x);
void insertAtk(ListNode **head, int x, int k);
void printList(ListNode *head);
int deleteFromBeg(ListNode **head);
int deleteFromLast(ListNode **head);

int main()
{
    ListNode *head;
    int choice=0, x;
    init_link_list(&head);
    while(1)
    {   
        scanf("%d", &choice);
        if(choice==0)
        {
            init_link_list(&head);
        }
        else if(choice==1)
        {      
            scanf("%d", &x);
            insertAtBeg(&head, x);
        }
        else if(choice==2)
        {
            scanf("%d", &x);
            insertAtLast(&head, x);
        }
        else if(choice==3)
        {
            printList(head);
        }
        else if(choice==5)
        {
            printf("%d\n",deleteFromBeg(&head));
        }
        else if(choice==6)
        {
            printf("%d\n",deleteFromLast(&head));
        }
        else
            break;
    }
    return 0;
}

void init_link_list(ListNode **head){
     (*head) = NULL;
}

void insertAtBeg(ListNode **head, int x)
{
    ListNode *temp;
    temp = (ListNode *) malloc(sizeof(ListNode));  
    temp->data = x;  
    temp->next = *head;  
    *head = temp;
}

void insertAtLast(ListNode **head, int x)
{
    ListNode *temp, *ptr;
    ptr = (ListNode*)malloc(sizeof(ListNode));  
    ptr->data = x;
    if(*head == NULL)  
    {  
        ptr->next = NULL;  
        *head = ptr;  
    }  
    else  
    {  
        temp = *head;  
        while (temp->next != NULL)  
        {  
            temp = temp->next;  
        }  
        temp->next = ptr;  
        ptr->next = NULL;  
    }
}

void insertAtk(ListNode ** head, int x, int k){
    ListNode *temp,*ptr;
    ptr=(ListNode* )malloc(sizeof(ListNode));
    ptr->data=x;
    if (*head==NULL){
        ptr->next=NULL;
        *head=ptr;
    }
    else{
        ListNode *temp=*head;
        while (temp->data!=k){
            temp=temp->next;
        }
        ptr->next=temp->next;
        temp->next=ptr;
    }
}

void printList(ListNode *head)
{
    ListNode *temp;  
    temp = head;
    while (temp != NULL)  
    {
        if (temp->next==NULL){
            printf("%d\n",temp->data);
        }
        else{
            printf("%d, ", temp->data);
        }
        temp = temp->next;
    }  
}

int deleteFromBeg(ListNode **head)
{
    if(*head == NULL)
    {
        return -1;
    }
    else
    {
        ListNode *temp = *head;
        int data = temp->data;
        *head = temp->next;
        free(temp);
        return data;
    }
}

int deleteFromLast(ListNode **head)
{
    if(*head == NULL)
    {
        return -1;
    }
    else if((*head)->next == NULL)
    {
        int data = (*head)->data;
        free(*head);
        *head = NULL;
        return data;
    }
    else
    {
        ListNode *temp = *head;
        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        int data = temp->next->data;
        free(temp->next);
        temp->next = NULL;
        return data;
    }
}