#include <stdio.h>
int main()
{
    int n,arr[n],i,max;
    printf("Len of arr: ");
    scanf("%d",&n);
    printf("Enter arr: ");
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for (i=0;i<n;i++){
        if (max<arr[i]){
            arr[i]=max;
        }
    }
    printf("max of arr is %d",max);
}