#include<bits/stdc++.h>
using namespace std;
  vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>res;
        for(int i=0;i<nums.size();i++){
            int tar=0-nums[i];
            if(i>0 && nums[i-1]==nums[i])continue;
            int start=i+1,end=nums.size()-1;
           
            while(start<end){
                if(nums[start]+nums[end]>tar)end--;
                else if(nums[start]+nums[end]<tar)start++;
                else{
                 
                  res.push_back({nums[i],nums[start],nums[end]});
                  while(start<end && nums[start+1]==nums[start]){
                    start++;
                  }
                                    while(start<end && nums[end]==nums[end-1]){
                    end--;
                  }



                start++,end--;
                }
            }
        }
        return res;

    }
    int main(){
        vector<int>nums={-1,0,1,2,-1,-4};
        vector<vector<int>>res=threeSum(nums);
        for(auto x:res){
            for(int i=0;i<x.size();i++){
                cout<<x[i]<<" ";
            }
            cout<<endl;
        }
    }