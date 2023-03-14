#include <stdio.h>
int main()
{
    int a[3][3],b[3][3],i,j;
    printf("Enter matrix 1: ");
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter matrix 2: ");
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("Matrix 1 is: \n");
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        if (j==3){
            printf("\n");
        }
    }
    printf("Matrix 2 is: \n");
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            printf("%d ",b[i][j]);
        }
        if (j==3){
            printf("\n");
        }
    }
    int c[3][3];
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            c[i][j]=
        }
    }
    
}