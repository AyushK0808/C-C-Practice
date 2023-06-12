#include <stdio.h>
int V, E;
void createAdjEatrix(int Adj[][100],int arr[][2]){
    for (int i = 0; i < V + 1; i++) {
        for (int j = 0; j < V + 1; j++) {
            Adj[i][j] = 0;
        }
    }
    for (int i = 0; i < E; i++) {
        int x = arr[i][0];
        int y = arr[i][1];
        Adj[x][y] = 1;
        Adj[y][x] = 1;
    }
}

void printAdjEatrix(int Adj[100][100]){
    for (int i = 1; i < V + 1; i++) {
        for (int j = 1; j < V + 1; j++) {
            printf("%d ", Adj[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    V = 5;
    int arr[][2]
        = { { 1, 2 }, { 2, 3 },
            { 4, 5 }, { 1, 5 } };
    E = sizeof(arr) / sizeof(arr[0]);
    int Adj[100][100];
    createAdjEatrix(Adj, arr);
    printAdjEatrix(Adj);
    return 0;
}