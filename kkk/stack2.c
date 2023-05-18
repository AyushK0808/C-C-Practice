#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MIN -9999;

typedef struct stack{
    int *arr;
    int max_size;
    int top;
}myst;

myst* init_stack(int max_size);
void push(myst *s, int n);
int pop(myst *s);
void show_st(myst *s);

bool st_overflow(myst *s);
bool st_underflow(myst *s);

myst* init_stack(int max_size){
    myst *s;
    s=malloc(sizeof(myst));
    if (s==NULL){
        return NULL;
    }
    s->arr=malloc(sizeof(int)*max_size);

    if (s->arr==NULL){
        free(s);
        return NULL;
    }
    s->max_size=max_size;
    s->top=-1;
    return s;
}

void push(myst *s,int n){
    if (st_overflow(s)){
        printf("STACK OVERFLOW");
    }
    else{
        s->top+=1;
        s->arr[s->top]=n;
        printf("ELEMENT INSERTED \n");
    }
}

int pop(myst *s){
    if (st_underflow(s)){
        printf("STACK UNDERFLOW!");
        return MIN;
    }
    else{
        int n=s->arr[s->top];
        s->top-=1;
        return n;
        printf("ELEMENT DELETED \n");
    }
}

void show_st(myst *s){
    for (int i=1;i<s->top+1;i++){
        printf("%d ",s->arr[i]);
    }
}

bool st_overflow(myst *s){
    return (s->max_size-1==s->top);                                                                                                                                                                                                                                                                                                                     
}

bool st_underflow(myst *s){
    return (s->top==-1);
}

int main(){
    myst *s1;
    push(s1,30);
    show_st(s1);
    pop(s1);
    pop(s1);
    show_st(s1);
}