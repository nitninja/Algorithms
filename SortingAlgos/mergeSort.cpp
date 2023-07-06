#include<bits/stdc++.h>
using namespace std;

void merge(int a[],int s,int e){
    int mid =(s+e)/2;

    int i=s;
    int j=mid+1;
    int k=s;

    int temp[100];

    while(i<=mid and j<=e){
        if(a[i]<a[j]){
            temp[k++]=a[i++];
        }
        else temp[k++]=a[j++];
    }
    while(i<=mid){
        temp[k++]=a[i++];
    }
    while(j<=e){
        temp[k++]=a[j++];
    }

    for(int i=s;i<e;i++){
        a[i]=temp[i];
    }
}

void mergesort(int a[],int s,int e){
    //if 0 or 1 element
    if(s>=e){
        return ;
    }

    //divide 
    int mid=(s+e)/2;

    //now two arrays from s to mid and mid+1 to e

    mergesort(a,s,mid);
    mergesort(a,mid+1,e);

    //merging 

    merge(a,s,e);


}

int main(){
 
    freopen("/home/nitish/Documents/inputOutput/input.txt","r",stdin);
   freopen("/home/nitish/Documents/inputOutput/Output.txt","w",stdout);

    int a[]={8,4,2,7,9,1,2,10,5,29};
    int size=sizeof(a)/sizeof(0);
    mergesort(a,0,size);

    for(int i=0;i<size;i++){
        cout<<a[i]<<"->";
    }


  return 0;  
}