#include<stdio.h>  
  
int getMax(int a[], int n) {  
   int max = a[0];  
   for(int i = 1; i<n; i++) {  
      if(a[i] > max)  
         max = a[i];  
   }  
   return max;  
}  
  
void countSort(int a[], int n){  
   int output[100];  
   int max = getMax(a, n);  
   int count[100];   
  for (int i = 0; i <= max; ++i){  
    count[i] = 0;   
   }  
   for (int i = 0; i < n; i++){  
    count[a[i]]++;  
  }  
  for(int i = 1; i<=max; i++)   
      count[i] += count[i-1];   
   for (int i = n - 1; i >= 0; i--) {  
    output[count[a[i]] - 1] = a[i];  
    count[a[i]]--;   
}  
  for(int i = 0; i<n; i++) {  
      a[i] = output[i];   
   }  
}  
int main() {  
    int n;
    scanf("%d",&n);
    int arr[1001];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    } 
    countSort(arr, n);  
    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;  
}  