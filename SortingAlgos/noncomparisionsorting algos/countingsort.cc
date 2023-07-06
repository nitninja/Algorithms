#include<bits/stdc++.h>
using namespace std;

//elements should be integers and in range of 0 to k
//for sorting with counting sort

void countSort(int a[],int size){

    int k=a[0];
    for(int i=1;i<size;i++){
        if(a[i]>k){
            k=a[i];
        }
    }

    // cout<<k<<endl;

        int count[k+1],b[size+1];
        
        for(int i=0;i<=k;i++){
        count[i]=0;
        }
        
        for(int i=0;i<size;i++){
            count[a[i]]++;
        }

        for(int i=1;i<=k;i++){
            count[i]+=count[i-1];
        }

        // for(int i=0;i<k;i++){
        //     cout<<count[i]<<" ";
        // }
        // cout<<endl;

        for(int i=size-1;i>=0;i--){
            b[count[a[i]]-1]=a[i];
            count[a[i]]--;
        }

        for(int i=0;i<size;i++){
            a[i]=b[i];
        }
              
    
}

// int main(){
//    freopen("/home/nitish/Documents/inputOutput/input.txt","r",stdin);
//    freopen("/home/nitish/Documents/inputOutput/Output.txt","w",stdout);


//     int a[]={12,7,2,4,6,3,8,9,1,5};
//     int size=sizeof(a)/sizeof(0);

//     countSort(a,size);

//     for(int i=0;i<size;i++){
//         cout<<a[i]<<" ";
//         }


//   return 0;  
// }