#include <stdio.h>
struct employee{
    int number;
    char name[100];
    int salary;
};

int main(){
    int n;
    printf("Enter number of employees: ");
    scanf("%d",&n);
    struct employee a[n];
    for (int i=0;i<n;i++){
        printf("Enter employee number: ");
        scanf("%d",&a[i].number);
        printf("\nEnter employee name: ");
        scanf("%s",a[i].name);
        printf("\nEnter employee salary: ");
        scanf("%d",a[i].salary);
    }
    for (int i=0;i<n;i++){
        printf("\nEmployee number: %d\n",a[i].number);
        printf("Employee name:");
        puts(a[i].name);
        printf("\nEmployee Salary: %d\n",a[i].salary);
    }
}