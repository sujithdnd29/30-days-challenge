#include<bits/stdc++.h>
using namespace std;
 vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size()>nums2.size())return intersect(nums2,nums1);
        unordered_map<int,int>st;
        for(int i:nums1){
        st[i]++;
        }
        vector<int>ans;
        for(int i=0;i<nums2.size();i++){
            if(st.find(nums2[i])!=st.end() && st[nums2[i]]>0){
                ans.push_back(nums2[i]);
                st[nums2[i]]--;
            }
        }
        return ans;
    }
    int main(){
        vector<int>arr1={1,2,2,3};
        vector<int>arr2={2,3,2,3,4};
        vector<int>res=intersect(arr1,arr2);
        for(int x:res){
            cout<<x<<" ";
        }
    }