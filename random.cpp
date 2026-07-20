#include<bits/stdc++.h>
using namespace std;


vector<vector<int>> threesum(vector<int>&nums){
    set<vector<int>> ans;
    for(int i=0;i<nums.size();i++){
        set<int>hash;
        for(int j=i+1;j<nums.size();j++){
            int third=-(nums[i]+nums[j]);
                if(hash.find(third)!=hash.end()){
                    vector<int>temp={nums[i],nums[j],third};
                    sort(temp.begin(),temp.end());
                    ans.insert(temp);
                }
        }
    }
    vector<vector<int>> final(ans.begin(),ans.end());
    return final;
}
vector<vector<int>> Threesum(vector<int>&nums){

    sort(nums.begin(),nums.end());
vector<vector<int>>ans;


for(int i=0;i<nums.size()-2;i++){
   int j=i+1;
   int k=nums.size()-1;
   if(i>0 && nums[i]==nums[i-1])continue;
    while(k>j){
        if(nums[i]+nums[j]+nums[k]==0){
            ans.push_back({nums[i],nums[j],nums[k]});
           j++;
           k--;
           while(nums[j]==nums[j-1])j++;
           while(nums[k]==nums[k+1])k--;
        }
        else if(nums[k]+nums[j]+nums[i]>0){
            k--;
        }
        else if(nums[k]+nums[j]+nums[i]<0){
            j++;
        }
    }
}
return ans;
}

int maxsubarr(vector<int>&nums){
    map<int,int>mpp;
    int maxi=0;
    int sum=0;
    for(int i=0;i<nums.size();i++){
     sum=sum+nums[i];
     if(sum==0)maxi=i+1;
     else if(mpp.find(sum)!=mpp.end())
     maxi=max(maxi,i-mpp[sum]);
     else
     mpp[sum]=i;
}
return maxi;
}

int noOfsubbwithxor(vector<int>&nums,int k){
    map<int,int>mpp;
    mpp[0]=1;
    int xors=0;
    int count=0;
for(int i=0;i<nums.size();i++){
    xors=xors^nums[i];
    if(mpp.find(k^xors)!=mpp.end()){
count=count +mpp[k^xors];
    }
    mpp[xors]++;
}
return count;
}

int firstnlast(vector<int>nums,int k){
    int low=0;
    int high=nums.size()-1;
    int first=-1;
  
    while(low<=high){
        int mid=high+low/2;
        if(nums[mid]==k){
            first=mid;
            high=mid-1;
        }
       else if(nums[mid]>k){
            
            high=mid-1;
        }
        else{
            low=mid+1;
        }

    }
    int lasts=-1;
      while(low<=high){
        int mid=high+low/2;
        if(nums[mid]==k){
            lasts=mid;
            low=mid+1;
        }
       else if(nums[mid]>k){
        
            high=mid-1;
        }
        else{
            low=mid+1;
        }

    }
    return {first,lasts-1};

}