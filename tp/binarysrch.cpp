#include <iostream>
using namespace std;
int binary(int a[ ],int low,int high,int srch)
{
    int mid;
    if (low>high){
        return -1;
    }
    else{
        mid=(low+high)/2;
        if (a[mid]<srch){
            return (binary(a,mid+1,high,srch));
        }
        else if (a[mid]>srch){
            return (binary(a,low,mid-1,srch));
        
        }
        else if (a[mid]==srch){
            return mid;
        }
    }
}

int main()
{
    int n,a[n],i,srch,res;
    cout<<"Enter length of array: ";
    cin>>n;
    cout<<"Enter array: ";
    for (i=0;i<n;i++){
        cin>>a[i];
    }
    for (i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<"Enter num to be searched:";
    cin>>srch;
    res=binary(a,0,n-1,srch);
    if (res==-1){
        cout<<"Num not found";
    }
    else{
        cout<<"Num found at: "<<res;
    }
}