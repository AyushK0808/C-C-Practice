#include <stdio.h>

int linsrch(int *arr, int src,int n){
    for (int i=0;i<n;i++){
        if (arr[i]==src){
            return i;
        }
        return -1;
    }
}

int main(){
    int arr[500], src,n;
    printf("Enter len of arr: ");
    scanf("%d",&n);
    printf("Enter array");
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter num to search: ");
    scanf("%d",&src);
    int res=linsrch(arr,src,n);
    if (res!=-1){
        printf("Num found at %d",res);
    }
    else{
        printf("Num not found");
    }
}