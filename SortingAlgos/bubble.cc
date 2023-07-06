#include<bits/stdc++.h>
using namespace std;

void Bubble(int a[],int size){
    
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
}

int main(){
   freopen("/home/nitish/Documents/inputOutput/input.txt","r",stdin);
   freopen("/home/nitish/Documents/inputOutput/Output.txt","w",stdout);

    int a[]={10,7,2,4,6,3,8,9,1,5};
    int size=sizeof(a)/sizeof(0);

    Bubble(a,size);

    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }

  return 0;  
}