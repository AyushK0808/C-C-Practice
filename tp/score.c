#include <stdio.h>
struct player{ 
    char name[20];
    int runs;
};
int main(){
    int total=0;
    struct player a[11];
    printf("Name of Player    Runs scored\n");
    for (int i=0;i<11;i++){
        scanf("%s %d",a[i].name,&a[i].runs);
    }
    printf("\n");
    for (int j=0;j<11;j++){
        total+=a[j].runs;
    }
    printf("Total score: %d",total);
}