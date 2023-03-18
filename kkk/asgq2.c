#include <stdio.h>
int main()
{
    int inc,tax;
    printf("Enter the income: ");
    scanf("%d",&inc);
    if (inc<150000){
        printf(" no tax");
    }
    else if (inc<300000){
        tax=0.1*(inc-150000);
        printf("Tax=%d",tax);
    }
    else if (inc<500000){
        tax=0.2*(inc-150000);
        printf("Tax=%d",tax);
    }
    else if (inc>500001){
        tax=0.3*(inc-150000);
        printf("Tax=%d",tax);
    }
    return 0;
}