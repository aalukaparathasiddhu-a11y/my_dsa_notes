#include<bits/stdc++.h>
using namespace std;
int sum(int n){
    if (n<1) return 0;
    if(n==1)return 1;
    else
    return n+sum(n-1);
}

void reverse(vector<int> &arr,int l,int r){
   if(l>=r) return;
      std::swap(arr[l],arr[r]);
       reverse(arr,l+1,r-1);
}


int main(){
    vector<int> add={1,2,3,4,5};
    reverse(add,0,4);
    for(int i:add)
    cout<<i<<endl;;
}