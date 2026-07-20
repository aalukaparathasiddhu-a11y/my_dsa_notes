#include<bits/stdc++.h>
using namespace std;
void nextperm(vector<int>& nums){
int n=nums.size();
int index=-1;
for(int i=n-2;i>=0;i--){
//finding index
if(nums[i]<nums[i+1]){
    index=i;
    break;
}
}
//if last permutation,rev to get next
if(index==-1){
    reverse(nums.begin(),nums.end());
    return;
}
for(int i=n-1;i>=index;i--){
    if(nums[i]>nums[index]){
        swap(nums[i],nums[index]);
        break;
    }
}
reverse(nums.begin()+index+1,nums.end());
return;
}