#include <stdio.h>

int binsrch(int *arr,int low, int high, int srch){
    int mid=(low+high)/2;
    if (arr[mid]==srch){
        return mid;
    }
    else if (arr[mid]>srch){
        binsrch(arr,mid+1,high,srch);
    }
    else if (arr[mid]<srch){
        binsrch(arr,low,mid-1,srch);
    }
    return -1;

}

int main(){
    int arr[500],len,srch;
    printf("Enter len of arr: ");
    scanf("%d",&len);
    printf("Enter array: ");
    for (int i=0;i<len;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter element to be searched: ");
    scanf("%d",&srch);
    if (binsrch(arr,0,len,srch)>0){
        printf("Loc of element: %d",binsrch(arr,0,len,srch));
    }
    else{
        printf("NUM NOT FOUND");
    }
}