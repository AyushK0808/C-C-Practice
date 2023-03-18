#include <stdio.h>
int combi(int n,int arr[n]){

}
int main(){
    int num,n=1,arr[n],j;
    scanf("%d",&num);
    int num2=num;
    while (num2>9){
        num2=num2/10;
        n++;
    }
    printf("%d",n);
    while (num>0){
        int i,a;
        a=num%10;
        arr[i]=a;
        i++;
        num=num/10;
    }
}