#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_COUNTRIES 100

void reorder(int n, char *x[]);

int main() {
    char *countries[MAX_COUNTRIES];
    char input[100];
    int count = 0;

    while (count < MAX_COUNTRIES) {
        fgets(input, sizeof(input), stdin);
        if (strcmp(input, "END\n") == 0) {
            break;
        }
        int len = strlen(input);
        if (input[len-1] == '\n') {
            input[len-1] = '\0';
        }
        countries[count] = malloc(len * sizeof(char));
        strcpy(countries[count], input);
        count++;
    }

    reorder(count, countries);

    for (int i = 0; i < count; i++) {
        printf("%s\n", countries[i]);
        free(countries[i]);
    }

    return 0;
}

void reorder(int n, char *x[]) {
    int i, j;
    char *temp;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (strcmp(x[i], x[j]) > 0) {
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
    }
}