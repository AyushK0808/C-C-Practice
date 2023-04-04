#include <stdio.h>
int main(){
    int date,arr[7],j;
    printf("Enter date: ");
    scanf("%d",&date);
    while (date>0){
        int i,a;
        a=date%10;
        arr[i]=a;
        i++;
        date=date/10;
    }
    for (j=0;j<7;j++){
        printf("%d",arr[j]);
    }
}