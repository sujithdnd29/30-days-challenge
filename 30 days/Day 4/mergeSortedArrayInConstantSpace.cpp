#include<bits/stdc++.h>
using namespace std;
  void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
     int i=m-1,j=0;
     while(i>=0 &&j<n){
        if(nums1[i]>=nums2[j]){
           swap(nums1[i],nums2[j]);
        i--,j++;
        }
        else break;
     }
     sort(nums1.begin(),nums1.begin()+m);
     sort(nums2.begin(),nums2.begin()+n);
     for(i=m,j=0;i<nums1.size(),j<nums2.size();i++,j++){
        nums1[i]=nums2[j];
     }

    }
    int main(){
        vector<int>arr1={1,2,3,0,0,0};
        int m=3,n=3;
        vector<int>arr2={2,5,6};
        merge(arr1,m,arr2,n);
        for(int i=0;i<arr1.size();i++){
            cout<<arr1[i]<<" ";
        }
    }