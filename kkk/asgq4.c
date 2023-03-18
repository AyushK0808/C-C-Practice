#include<stdio.h>
#include<string.h>
int main(){
    char str[100],ch;
    gets(str);
    int len=strlen(str);
    scanf("%c",&ch);
    for (int i=0;i<len;i++){
        if (str[i]==ch){
            for (int j=i;j<len;j++){
                str[j]=str[j+1];
            }
        }
    }
    puts(str);
    return 0;
}