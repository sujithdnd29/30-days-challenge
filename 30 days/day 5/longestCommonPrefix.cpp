#include<bits/stdc++.h>
using namespace std;
 string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string first=strs[0];
        string last=strs[strs.size()-1];
        string ans="";
        for(int i=0;i<min(first.size(),last.size());i++){
            if(first[i]!=last[i]){
                return ans;
            }
            ans+=first[i];
        }
        return ans;
    }
int main(){
vector<string>strs={"flower","flight","flaw"};
cout<<longestCommonPrefix(strs);


}