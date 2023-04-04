#include <stdio.h>
int main(){
    int pos=0,neg=0,i,posc=0,negc=0;
    while (i!=-1){
        printf("Enter number: ");
        scanf("%d",&i);
        if (i>0){
            pos+=i;
            posc++;
        }
        else if (i<-1){
            neg+=i;
            negc++;
        }
    }
    float pavg,navg;
    pavg=pos/posc;
    navg=neg/negc;
    printf("Average of positive is: %d",pavg);
    printf("Average of negative is: %d",navg);
}