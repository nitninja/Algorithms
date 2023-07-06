#include<bits/stdc++.h>
#include"Swap.cc"
using namespace std;


void heapify(int arr[],int n,int i){

    int max=i;
    int l=2*i+1;
    int r=2*i+2;
    
    if(l<n && arr[l]>arr[max])
        max=l;
    
    if(r<n && arr[r]>arr[max])
        max=r;

    if(max!=i){
        swap(arr[i],arr[max]);

        heapify(arr,n,max);
    }


}

void heapsort(int arr[],int n){
    for(int i=i/2-1;i>=0;i--){
        heapify(arr,n,i);
    }

    for(int i=n-1;i>0;i--){
        swap(arr[0],arr[i]);
        heapify(arr,i,0);
    }

}

void print(int a[],int n){
     for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){
   freopen("/home/nitish/Documents/inputOutput/input.txt","r",stdin);
   freopen("/home/nitish/Documents/inputOutput/Output.txt","w",stdout);
     int arr[] = { 10, 11, 13, 5, 6, 7 };

     int n=sizeof(arr)/sizeof(0);
    print(arr,n);
     heapsort(arr,n);

    print(arr,n);

  return 0;  
}