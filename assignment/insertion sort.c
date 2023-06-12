#include <stdio.h>

void insort(int *arr, int n){
    for (int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while (j>0 && arr[j]>key){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
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
    insort(arr,n);
    for (int i=0;i<n;i++){
        printf("%d ,",arr[i]);
    }
    return 0;
}