#include <stdio.h>
void countSort(int arr[], int size) {
  int op[10];
  int max = arr[0];
  for (int i = 1; i < size; i++) {
    if (arr[i] > max)
      max = arr[i];
  }
  int count[15];
  for (int i = 0; i <= max; ++i) {
    count[i] = 0;
  }
  for (int i = 0; i < size; i++) {
    count[arr[i]]++;
  }
  for (int i = 1; i <= max; i++) {
    count[i] += count[i - 1];
  }
  for (int i = size - 1; i >= 0; i--) {
    op[count[arr[i]] - 1] = arr[i];
    count[arr[i]]--;
  }
  for (int i = 0; i < size; i++) {
    arr[i] = op[i];
  }
}
int main() {
  int arr[] = {8,6,9,2,4,17,1,6,2};
  int n = sizeof(arr) / sizeof(arr[0]);
  countSort(arr, n);
  for (int i = 0; i < n; i++) {
    printf("%d  ", arr[i]);
  }
}