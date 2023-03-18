#include <stdio.h>

int main(){
    char accnum[6];
    int inp,bal=30000;

    printf("Enter bank account number: ");
    gets(accnum);
    printf("Name: Prasanth Kumar\nAvailable balance: %d\nAccount type: SB\n",bal);
    while (inp!=4){
        scanf("%d",&inp);
        if (inp==1){
            int withdraw,balarr[100];
            printf("Enter amount to withdraw: ");
            scanf("%d",&withdraw);
            if (bal>=withdraw){
                bal=bal-withdraw;
                printf("Amount withdrawn: %d & Available balance: %d\n",withdraw,bal);
                }
            else{
                printf("Invalid amount requests,check balance\n");
                break;
            }  
            }
        else if (inp==2){
            int dep;
            printf("Enter amount for deposit: ");
            scanf("%d",&dep);
            bal=dep+bal;
            printf("Amount deposited: %d\nAvailable balance is:%d\n",dep,bal);
        }
        else if (inp==3){
            printf("Balance is: %d\n",bal);
        }
    }
}