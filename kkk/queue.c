#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct queue{
    int *arr;
    int max_size;
    int rear;
    int front;
}myq;

myq* init_queue(int max_size);
void enqueue(myq *q, int n);
int dequeue(myq *q);
void show_q(myq *sq);

bool overflow(myq *q);
bool underflow(myq *q);

myq* init_queue(int max_size){
    myq *q;
    q=malloc(sizeof(myq));
    if (q==NULL){
        return NULL;
    }
    q->arr=malloc(sizeof(int)*max_size);

    if (q->arr==NULL){
        free(q);
        return (NULL);
    }
    max_size=100;
    q->max_size=max_size;
    q->front=-1;
    q->rear=-1;
    return q;
}

void enqueue(myq *q, int n){
    if (overflow(q)){
        printf("OVERFLOW!\n");
    }
    else{
    
        q->rear+=1;
        q->arr[q->rear]=n;
    }
}

int dequeue(myq *q){
    if (underflow(q)){
        printf("UNDERFLOW!\n");
    }
    else{
        int n=q->arr[q->rear];
        q->front+=1;
        return (n);
    }
}

void show_q(myq *q){
    for (int i=1;i<=q->rear;i++){
        printf("%d ",q->arr[i]);
    }
}

bool overflow(myq *q){
    return (q->rear==q->max_size);
}

bool underflow(myq *q){
    return (q->front<0 || q->front < q->rear);
}

int main(){
    myq *q1;
    enqueue(q1,20);
    enqueue(q1,30);
    show_q(q1);
    dequeue(q1);
    show_q(q1);
    enqueue(q1,40);
    show_q(q1);
}
