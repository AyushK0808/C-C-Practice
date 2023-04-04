#include <stdio.h>
int power(int num,int pow){
    if (pow==0){
        return 1;
    }
    else{
        return num*power(num,pow-1);
    }
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",power(a,b));
}