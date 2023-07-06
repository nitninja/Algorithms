#include<bits/stdc++.h>
#include "Swap.cc"
using namespace std;


int partition(int *a,int s,int e){   
    //inplace (can't take extra space)
    int i=s-1;
    int j=s;
    int pivot=a[e];

    for(;j<=e-1;){
        if(a[j]<=pivot){
            i=i+1;
            Swap(&a[i],&a[j]);
        }
        j=j+1;
    }
    Swap(&a[i+1],&a[e]);
    return i+1;
}


void quickSort(int a[],int s,int e){
    //base case
    if(s>=e){
        return ;
    }

    //recursive case
    int p=partition(a,s,e);
    //left part
    quickSort(a,s,p-1);
    //right part
    quickSort(a,p+1,e);
}



int main(){
    freopen("/home/nitish/Documents/inputOutput/input.txt","r",stdin);
   freopen("/home/nitish/Documents/inputOutput/Output.txt","w",stdout);
 
    // int a[]={2,7,8,6,1,5,4};
    int  a[]={3,7,5,2,6,8,1,9,4};

    int size=sizeof(a)/sizeof(0);
    cout<<size<<endl;
    // for(int i=0;i<sizeof(a);i++){
    //     cout<<a[i]<<" ";
    //     }
    quickSort(a,0,size-1);

    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
  return 0;  
}