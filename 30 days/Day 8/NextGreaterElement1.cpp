#include<bits/stdc++.h>
using namespace std;
   vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>nge(nums2.size());
        stack<int>st;
        for(int i=nums2.size()-1;i>=0;i--){
            while(!st.empty() &&nums2[i]>nums2[st.top()]){
                st.pop();
            }
            if(st.empty())nge[i]=-1;
            else nge[i]=nums2[st.top()];
            st.push(i);
        }
        unordered_map<int,int>mpp;
        for(int i=0;i<nums2.size();i++){
            mpp[nums2[i]]=i;
        }
        vector<int>nge1(nums1.size());
        for(int i=0;i<nums1.size();i++){
            nge1[i]=nge[mpp[nums1[i]]];
        }
        return nge1;

    }
    int main(){
        vector<int>nums1={4,1,2};
        vector<int>nums2={1,3,4,2};
        vector<int>res=nextGreaterElement(nums1,nums2);
        for(int x:res){
            cout<<x<<" ";
        }
    }