#include<bits/stdc++.h>
using namespace std;
    int compress(vector<char>& chars) {
        int n=chars.size();
        int charcount=0;
        for(int i=0;i<n;i++){
            char ch=chars[i];
            int count=0;
                int j = i;
            while (j < n && chars[j] == ch) {
                count++;
                j++;
            }
            
            chars[charcount++] = ch;
            
            if (count > 1) {
                string num = to_string(count);
                for (char c : num) {
                    chars[charcount++] = c;
                }
            }
            
            i = j-1; 
                
            
        }
        return charcount;
    }
    int main(){
        vector<char>chars={'a','a','b','b','b','c','c','d'};
        cout<<compress(chars);
        for(char c:chars){
            cout<<c<<" ";
        }

    }