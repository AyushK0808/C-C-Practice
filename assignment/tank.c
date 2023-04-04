#include <stdio.h>
int bubblesort(int n,int *arr){
    int i,j,temp,*xp,*yp;
    for (i=0;i<n-1;i++){
        for (j=0;j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                *xp=arr[j];
                *yp=arr[j+1];
                temp=*xp;
                *xp=*yp;
                *yp=temp;
            }
        }
    }
}
int main(){
    int n1,n2,a[n1],b[n2],c[n1+n2],sort[n1+n2];
    printf("Number of elements in first tank: ");
    scanf("%d",&n1);
    printf("Enter the items for first tank: ");
    for (int i=0;i<n1;i++){
        scanf("%d",&a[i]);
        c[i]=a[i];
    }
    printf("Number of elements in second tank: ");
    scanf("%d",&n2);
    printf("Enter the items for second tank: ");
    for (int j=0;j<n2;j++){
        scanf("%d",&b[j]);
    }
    for (int k=n1;k<(n1+n2);k++){
        c[k]=b[k-n1];
    }
    printf("Elements after merging: ");
    for (int x=0;x<(n1+n2);x++){
        printf("%d ",c[x]);
    }
    sort[n1+n2]=bubblesort(n1+n2,c[n1+n2]);
    printf("Elements after sorting: ");
    for (int y=0;y<(n1+n2);y++){
        printf("%d ",sort[y]);
    }
    

}