#include <stdio.h>
#include <string.h>

int main(){
    char *str,inp,*ptr,*ptr2;
    fgets(str,100,stdin);
    scanf("%c",&inp);
    ptr=str;
    while (ptr!=NULL){
        if (*ptr!=inp){
            *ptr2=inp;
            ptr2++;
        }
        ptr++;
    }
    printf("%s",ptr2);
}