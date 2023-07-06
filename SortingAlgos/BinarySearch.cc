#include<bits/stdc++.h>
using namespace std;

void BinarySearch(int a[],int n,int l,int r){
    int mid;
    if(r>=l){
    mid=l+((r-l)/2);
    }

    if(a[mid]==n){
        cout<<mid<<endl;
        return ;
    }

    if(a[mid]>n){

        BinarySearch(a,n,l,mid-1);
    }

    if(a[mid]<n){
       
        BinarySearch(a,n,mid+1,r);
    }
}
int main(){
 
    int arr[]={1,2,3,4,5,6,7};
    int num=7;

    int size=sizeof(arr)/sizeof(arr[0]);
    int l,r;
    l=0;
    r=size-1;
    BinarySearch(arr,num,l,r);


  return 0;  
}