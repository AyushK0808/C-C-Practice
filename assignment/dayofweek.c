#include <stdio.h>

char *day_name(int n){
    char *day_str[] = {
    "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday", NULL
    };
    return *(day_str+(n-1));
}
int main(){
    int n;
    char res[10];
    printf("Enter day of week: ");
    scanf("%d",&n);
    printf("%s",day_name(n));
}