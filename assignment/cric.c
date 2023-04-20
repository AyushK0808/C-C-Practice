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
        gets(a[i].name);
        scanf("%d",&a[i].runs);
    }
    printf("\n");
    for (int j=0;j<11;j++){
        total+=a[j].runs;
    }
    printf("Total score: %d",total);
    int hs=0,count=0;
    for (int i=0;i<11;i++){
        if (a[i].runs>hs){
            hs=a[i].runs;
        }
    }
    for (int i=0;i<11;i++){
        if (a[i].runs==hs){
            count++;
        }
    }
    for (int i=0;i<11;i++){
        if (count==1 && a[i].runs==hs){
            printf("\nMan of the Mathch: ");
            puts(a[i].name);
        }
        else if (count>1){
            printf("Cannot be predicted");
            break;
        }

    }
}