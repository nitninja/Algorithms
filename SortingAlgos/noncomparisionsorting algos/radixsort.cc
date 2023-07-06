#include<bits/stdc++.h>
#include"countingsort.cc"
using namespace std;

void radixsort(int a[],int size){

    int k=a[0];
    for(int i=1;i<size;i++){
        if(a[i]>k){
            k=a[i];
        }
    }

    for(int place=1;k/place>0;place*=10){
        countSort(a,size);
    }
}

int main(){
   freopen("/home/nitish/Documents/inputOutput/input.txt","r",stdin);
   freopen("/home/nitish/Documents/inputOutput/Output.txt","w",stdout);

    int a[] = {181, 289, 390, 121, 145, 736, 514, 888, 122};  
    int size=sizeof(a)/sizeof(a[0]);  

    radixsort(a,size);


    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
        }

  return 0;  
}