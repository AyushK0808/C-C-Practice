#include <stdio.h>

int main() {
    char str[100], ch, *p, *q;
    gets(str);
    scanf("%c", &ch);
    p = str;
    q = str;
    while (*p) {
        if (*p != ch) {
            *q = *p;
            q++;
        }
        p++;
    }
    *q = '\0';
    printf("%s\n", str);
    return 0;
}