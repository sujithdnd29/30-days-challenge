#include<bits/stdc++.h>
using namespace std;
  vector<int>getConcatenation(vector<int>& nums) {
        vector<int>arr(nums.size()*2);
        for(int i=0;i<nums.size();i++){
            arr[i]=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            arr[i+nums.size()]=nums[i];
        }
        return arr;

    }
    int main(){
        vector<int>arr={1,2,3,4};
        vector<int>res=getConcatenation(arr);
        for(int i=0;i<res.size();i++){
            cout<<res[i]<<" ";
        }
    }