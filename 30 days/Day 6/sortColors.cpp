#include<bits/stdc++.h>
using namespace std;
void sortColors(vector<int>& nums) {
        int mid=0,start=0,high=nums.size()-1;
        while(mid<=high){
            if(nums[mid]==1)mid++;
            else if(nums[mid]==0){
                swap(nums[start],nums[mid]);
                start++,mid++;
            }
            else {
                swap(nums[mid],nums[high]);
                high--;
            }
        }
    }
int main(){
    vector<int>arr={2,0,1,2,0,0,1};
    sortColors(arr);
    for(int x:arr){
        cout<<x<<" ";
    }

}