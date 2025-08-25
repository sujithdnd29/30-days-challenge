#include<bits/stdc++.h>
using namespace std;
 int longestConsecutive(vector<int>& nums) {
        if(nums.size()==1)return 1;
         if(nums.size()==0)return 0;
       
        int longlength=1;
        unordered_set<int>st;
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }
        for(auto it:st){
            if(st.find(it-1)==st.end()){
                int currcount=1;
                int x=it;
                while(st.find(x+1)!=st.end()){
                    currcount++;
                    x=x+1;
                }
                longlength=max(currcount,longlength);
            }
        }
      
       
         return longlength;
    }
    int main(){
        vector<int>arr={100,1,101,2,3,4,5,103};
        cout<<longestConsecutive(arr);
    }