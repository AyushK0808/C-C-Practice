#include <stdio.h>
#include <malloc.h>

#define INT_MIN -9999

typedef struct STACK{
    int *array;
    int max_size;
    int top;
}mySTACK;

mySTACK * init_stack(int max_size);
void push(mySTACK*s, int x);
int pop(mySTACK*s);
void print_stack(mySTACK*s);

int main(){
    mySTACK *s1;
    mySTACK *s2;
    int x;
    s1= init_stack(10);
    push (s1,"a");
    push (s1,"c");
    print_stack(s1);
    x=pop(s1);
    printf("Deleted element is %c\n",x);
    print_stack(s1);
    return 0;
}

mySTACK* init_stack(int max_size){
    mySTACK *s;
    s=malloc(sizeof(mySTACK));
    if (s=NULL){
        return NULL;
    }
    s ->array=malloc(sizeof(int)*max_size);

    if (s->array==NULL){
        free (s);
        return NULL;
    }
    s->max_size=max_size;
    s->top=-1;
    return s;
}

void push(mySTACK*s, int x){
    if (s->max_size -1 == s->top){
        printf("STACK OVERFLOW!!");
    }
    else{
        s->top+=1;
        s->array[s->top]==x;
    }
}

int pop(mySTACK*s){
    int x;
    if (s->top ==-1){
        printf("STACK UNDERFLOW!!!");
        return INT_MIN;
    }
    else{
        x=s->array[s->top];
        s->top -=1;
        return x;
    }
}

void print_stack(mySTACK*s){
    int i;
    for (i=0;i<=s;i++){
        printf("%c ",s->array[i]);
    }
}