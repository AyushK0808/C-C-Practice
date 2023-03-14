#include <stdio.h>

int fact(int n)
{
    int i,k=1;
    for (i=1;i<=n;i++){
        k*=i;
    }
    return k;
}
int power(int m,int n)
{
    int j,prod=1;
    while (j<n)
    {
        prod*=m;
        j++;
    }
    return prod;
}
int main()
{
    int num,exp,i,res;
    printf("Enter two numbers(num and exp): ");
    scanf("%d %d",&num,&exp);
    for (i=0;i<=exp;i++)
    {
        
        res+=((power(num,i)))/(fact(i));
    }
    printf("%d",res);
}