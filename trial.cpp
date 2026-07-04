#include<bits/stdc++.h>
using namespace std;

    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<int>hash(2001,0);
for(int i=0;i<nums1.size();i++){
    if(hash[nums1[i]+1000]==0)
        hash[nums1[i]+1000]++;
}
for(int i=0;i<nums2.size();i++){
    if(hash[nums2[i]+1000]==0||hash[nums2[i]+1000]==1)
    hash[nums2[i]+1000]--;
}
vector<vector<int>>ans;
vector<int>row1;
for(int i=0;i<hash.size();i++){
    if(hash[i]==1) row1.push_back(i-1000);
}
sort(row1.begin(),row1.end());
ans.push_back(row1);
vector<int>row2;
for(int i=0;i<hash.size();i++){
    if(hash[i]==-1) row2.push_back(i-1000);
}
sort(row2.begin(),row2.end());
ans.push_back(row2);

    return ans;
    }
int main(){
    vector<int>num1={1,2,3,3};
    vector<int>num2={1,1,2,2};
    vector<vector<int>>ans=findDifference(num1,num2);
    for(auto x:ans){
        cout << x <<endl;
    }
}