#include <stdio.h>
void merge(int a[],int beg,int mid,int end){
    int i,j,k;
    int n1=mid-beg+1;
    int n2=end-mid;
    
    int arrL[100];
    int arrR[100];
    for (i=0;i<n1;i++){
        arrL[i]=a[beg+i];
    }
    for (j=0;j<n2;j++){
        arrR[j]=a[mid+1+j];
    }
    
    i=0,j=0,k=beg;
    while (i<n1 && j<n2) {
        if(arrL[i]<=arrR[j]){
            a[k]=arrL[i];
            i++;
        }
        else{
            a[k]=arrR[j];
            j++;
        }
        k++;
    }
    while (i<n1) {
        a[k]=arrL[i];
        i++;
        k++;
    }
    while (j<n2) {
        a[k]=arrR[j];
        j++;
        k++;
    }
}

void mergeSort(int a[],int beg,int end){
    if (beg<end){
        int mid = (beg+end)/2;
        mergeSort(a,beg,mid);
        mergeSort(a,mid+1,end);
        merge(a,beg,mid,end);
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[100];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    mergeSort(arr,0,n-1);
    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
