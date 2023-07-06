#include<bits/stdc++.h>
#include"Swap.cc"
using namespace std;

void swap(int i,int j){
    int temp;
    temp=i;
    i=j;
    j=temp;
}

int partition(int *a,int low,int high){
    int i=low;
    int j=high;
    // a[high+1]=1000;
    int x=a[low];

    for(int k=low+1;k<=high;k++)
    {
        if(a[k]<=x){
            i+=1;
            Swap(&a[i],&a[k]);
        }
    }
    Swap(&a[low],&a[i]);
    return i;

}

void qs(int a[],int low, int high){
   
    if(low<high){
        
        int j= partition(a,low,high);
        qs(a,low,j-1);
        qs(a,j+1,high);
    }
}

int main(){
   freopen("/home/nitish/Documents/inputOutput/input.txt","r",stdin);
   freopen("/home/nitish/Documents/inputOutput/Output.txt","w",stdout);
    
    int  arr[]={3,7,5,2,6,8,1,9,4};
    int low=0;
    int high=sizeof(arr)/sizeof(0);
    cout<<high<<endl;
    for(int i=0;i<sizeof(arr);i++){
        cout<<arr[i]<<" ";
        }
        cout<<endl;

    qs(arr,low,high-1);

   for(int i=0;i<high;i++){
    cout<<arr[i]<<" ";
   }

  return 0;  
}