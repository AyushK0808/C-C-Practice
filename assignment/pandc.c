#include <stdio.h>
int main(){
    float ps=0,pc=0,ns=0,nc=0,i;
    while (i!=-1){
        scanf("%d",&i);
        if (i>0){
            ps+=i;
            pc++;
        }
        else if (i<-1){
            ns+=i;
            nc++;
        }
    }
    printf("Avg of positive num: %f",ps/pc);
    printf("Avg of negative num: %f",ns/nc);
}