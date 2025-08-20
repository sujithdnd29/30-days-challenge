#include<bits/stdc++.h>
using namespace std;
 void moveZeroes(vector<int>& nums) {
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                nums[j++]=nums[i];
            }
        }
        while(j<nums.size()){
            nums[j]=0;
            j++;
        }
    }
    int main(){
        vector<int>arr={0,1,12,0,5,4};
        moveZeroes(arr);
        for(int i=0;i<arr.size();i++){
            cout<<arr[i]<<" ";
        }
    }