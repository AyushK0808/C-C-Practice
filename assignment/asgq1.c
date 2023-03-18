#include <stdio.h>
int main(){
    int num,n=1,arr[n];
    scanf("%d",&num);
    int num2=num;
    while (num2>9){
        num2=num2/10;
        n++;
    }
    while (num>0){
        int i,a;
        a=num%10;
        arr[i]=a;
        i++;
        num=num/10;
    }
    int i,j,k;
    for (i=1;i<=n;i++){
        for (j=0;j<n-1;j++){
            k=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=k;
            int b;
            for (b=0;b<n;b++){
                printf("%d",arr[b]);
            }
            printf("\n");
        }
    }
}