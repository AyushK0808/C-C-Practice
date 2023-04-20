#include<stdio.h>

void quickSort( int *nuts, int a, int b ){
    if( a >= b )
        return;
    int i, pivot = nuts[a], handle = a;
    for( i=a + 1; i<=b; i++ ){
        if( nuts[i] < pivot ){
            int temp = nuts[++handle];
            nuts[handle] = nuts[i];
            nuts[i] = temp;
        }
    }
    nuts[a] = nuts[handle];
    nuts[handle] = pivot;
    quickSort( nuts, a, handle - 1);
    quickSort( nuts, handle + 1, b );
}
int Mid( int mid, int *T, int *P, int m, int numSquirrels, int k ){
    int i, j, nuts[m];
    for( i=0; i<m; i++ ){
        if( mid >= T[i] ){
            nuts[i] = (mid - T[i])/P[i] + 1;
        }
        else{
            nuts[i] = 0;
        }
    }
    quickSort( nuts, 0, m-1 );
    int sum = 0;
    for( i=m - 1; i>= m - numSquirrels; i-- ){
        sum += nuts[i];
        if( sum >= k){
            return 1;
        }
    }
    return 0;
}

int main(){
    int i, low, high, mid, m, n, k;
    scanf( "%d %d %d", &m, &n, &k );
    if( n > m ){
        n = m;
    }
    int T[m], P[m];
    for( i=0; i<m; i++ ){
        scanf( "%d", &T[i] );
    }
    for( i=0; i<m; i++ ){
        scanf( "%d", &P[i] );
    }
    low = 0;
    high = T[0] + (k - 1)*P[0];
    for( i=1; i<m; i++ ){
        if( T[i] + (k - 1)*P[i] < high ){
            high = T[i] + (k - 1)*P[i];
        }
    }
    while( high > low ){
        mid = (high + low)/2;
        if( Mid( mid, T, P, m, n, k ) ){
            high = mid;
        }
        else{
            low = mid+1;
        }
    }
    printf( "\n%d", high );
    return 0;
}