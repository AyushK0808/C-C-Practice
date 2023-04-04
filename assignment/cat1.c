#include <stdio.h>
#include <string.h>
int main(){
    char str[100],substr[100];
    char *p;
    printf("Enter string: ");
    gets(str);
    printf("Enter substring: ");
    gets(substr);
    p=strstr(str,substr);
    if (p){
        printf("SUCCESS!!");
    }
    else{
        printf("Nein");
    }
}