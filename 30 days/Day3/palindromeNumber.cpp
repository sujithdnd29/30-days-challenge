#include<bits/stdc++.h>
using namespace std;
  bool palindrome(string s){
     int start=0,end=s.size()-1;
        while(start<=end){
            if(s[start]!=s[end]){
              return false;
            }
            start++,end--;
        }
        return true;
   }
    bool isPalindrome(int x) {
        string s=to_string(x);
        return palindrome(s);
      
    }
    int main(){
        int x=121;
        cout<<isPalindrome(x);
    }