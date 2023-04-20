#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void bubblesort(int n,int *arr){
    for (int i=0;i<n-1;i++){
        for (int j=0;i<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}
int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main(){
    int n,m,*arr;
    printf("1st tank: ");
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("2nd tank: ");
    scanf("%d",&m);
    arr=(int*)realloc(arr,(m+n));
    for (int i=m+n-1;i>=n;i--){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<(m+n);i++){
        printf("%d ",arr[i]);
    }
    qsort(arr,m+n,sizeof(int),cmpfunc);
    for (int i=0;i<(m+n);i++){
        printf("%d ",arr[i]);
    }
}