#include <stdio.h>
void update (int *a, int *b){
    printf("%d\n%d",(*a * *b),(*a+*b));
}

int main(){
    int a,b;
    scanf("%d\n%d",&a,&b);
    update(&a,&b);
}