#include <stdio.h>

void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void selsort(int *arr, int n){
    for (int i=1;i<n;i++){
        int min=i;
        for (int j=i+1;j<n;j++){
            if (arr[j]<arr[min]){
                min=j;
            }
        }
        if (min!=1){
            swap(&arr[min],&arr[i]);
        }
    }
}

int main(){
    int n,arr[500];
    printf("Enter arr len: ");
    scanf("%d",&n);
    printf("Enter arr: ");
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    selsort(arr,n);
    for (int i=0;i<n;i++){
        printf("%d ,",arr[i]);
    }
    return 0;
}