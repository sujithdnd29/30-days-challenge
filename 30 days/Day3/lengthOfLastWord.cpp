#include<bits/stdc++.h>
using namespace std;
 int lengthOfLastWord(string s) {
        int n=s.size();
        int i=n-1;
        while(i>=0 && s[i]==' '){
            i--;
        }
        int count=0;
        while(i>=0 && s[i]!=' '){
         count++,i--;
        }
        return count;
   }
   int main(){
    string s=" A man is a goat ";
    cout<<lengthOfLastWord(s);
   }