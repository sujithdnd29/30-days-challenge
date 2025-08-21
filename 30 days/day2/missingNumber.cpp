#include<bits/stdc++.h>
using namespace std;
   int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int ogsum=((n)*(n+1))/2;
        int sum=0;
        for(int i=0;i<nums.size();i++){
           sum+=nums[i];
        }
        return ogsum-sum;
    }
    int main(){
        vector<int>arr={0,1,2};
        cout<<missingNumber(arr);
    }