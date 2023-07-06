#include<bits/stdc++.h>
using namespace std;

void insertion(int a[],int size){

    int temp;
    int j;
    for(int i=0;i<size-1;i++){
        temp=a[i+1];
        j=i;

        while(j>=0&& a[j]>temp){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
}

int main(){
   freopen("/home/nitish/Documents/inputOutput/input.txt","r",stdin);
   freopen("/home/nitish/Documents/inputOutput/Output.txt","w",stdout);


    int a[]={11,7,2,4,6,3,8,9,1,5};
    int size=sizeof(a)/sizeof(0);

    insertion(a,size);
        
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }


  return 0;  
}