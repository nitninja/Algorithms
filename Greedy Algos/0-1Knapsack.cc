#include<bits/stdc++.h>
using namespace std;

// recursive approach

int MaxProfit(int *wt,int *price,int n,int c){

    if(n==0||c==0){
        return 0;
    }

    //rec part
    int ans=0;
    int include,exclude;
    include=exclude=INT_MIN;

    //Include
    if(wt[n-1]<=c){
        include=price[n-1]+MaxProfit(wt,price,n-1,c-wt[n-1]);
    }

     exclude=MaxProfit(wt,price,c,n-1);

    ans=max(include,exclude);
    
    return ans;
}

int main(){
     freopen("/home/nitish/Documents/inputOutput/input.txt","r",stdin);
   freopen("/home/nitish/Documents/inputOutput/Output.txt","w",stdout);

    int weights[]={1,2,3,5};
    int prices[]={40,20,30,100};

    int n=4;
    int c=3;
    
    cout<<MaxProfit(weights,prices,n,c)<<endl;

  return 0;  
}