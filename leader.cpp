#include<bits/stdc++.h>
using namespace std;
vector<int> leader(vector<int>&nums){
    int max=INT_MIN;
    vector<int>ans;
    for(int i=nums.size()-1;i>=0;i++){
        if(nums[i]>max) {
            max=nums[i];
            ans.emplace_back(nums[i]);
        }
    }
    sort(ans.begin(),ans.end());
    return ans;
}