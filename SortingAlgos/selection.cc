#include<bits/stdc++.h>
using namespace std;

void selection(int a[],int size){

    int minPostion;

    for(int i=0;i<size-1;i++){
        minPostion=i;
        for(int j=i+1;j<size;j++){
            if(a[j]<a[minPostion]){
                minPostion=j;
            }
        }
        swap(a[i],a[minPostion]);
    }
}

int main(){
   freopen("/home/nitish/Documents/inputOutput/input.txt","r",stdin);
   freopen("/home/nitish/Documents/inputOutput/Output.txt","w",stdout);


    int a[]={12,7,2,4,6,3,8,9,1,5};
    int size=sizeof(a)/sizeof(0);

    selection(a,size);

    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
        }

  return 0;  
}