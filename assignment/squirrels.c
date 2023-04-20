#include <stdio.h>
#include <stdlib.h>
int comp(const void*a,const void *b){
    return(*(int*)b-*(int*)a);
}
void swap(int* xp, int* yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++){
        for (j = 0; j < n - i - 1; j++){
            if (arr[j] > arr[j + 1]){
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}
int main(){
    int m, n, k;
    scanf("%d %d %d", &m, &n, &k);
    int t[m];
    int p[m];
    for (int i = 0; i < m; i++){
        scanf("%d", &t[i]);
        }
    for (int i = 0; i < m; i++){
            scanf("%d", &p[i]);
        }
    int low = 0;
    int high = 1000000000;
    int mid;
    while (low<high){
        int total=0;
        mid = (low + high) / 2;
        int ans[m];
        for (int i = 0; i < m; i++){
                ans[i] = 0;
            }
        for (int i = 0; i < m; i++){
                int val = mid - t[i];
                if (val >= 0){
                    ans[i] = 1 + val / p[i];
                }
            }
            if(n>m){
                n=m;
            }
            bubbleSort(ans,m);
            for(int i=0;i<n;i++){
                total=total+ans[i];
            }
            if (total< k){
                low=mid+1;
            }
            else{
                high=mid;
            }
        }
    printf("%d\n", low);
}