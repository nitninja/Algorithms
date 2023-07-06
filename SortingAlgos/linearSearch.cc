#include<bits/stdc++.h>
using namespace std;

int lastOcc(int  a[],int n,int size){


    return 0;
}


int LinearSearch(int a[],int n,int size){

    if(size==-1){
        cout<<"Number Not Found!!"<<endl;
        return 0;
    }
    
    if(a[size]==n){
        cout<<"Found it at : "<<size<<endl;
        return 0;
    }

    LinearSearch(a,n,size-1);
    return 0;
}

int main(){
 
    int arr[]={1,12,33,47,15,69,72,81,47,99,110};
    int size=sizeof(arr)/sizeof(arr[0]);
    int n=47;

    LinearSearch(arr,n,size);


  return 0;  
}