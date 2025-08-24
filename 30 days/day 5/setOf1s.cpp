#include<bits/stdc++.h>
using namespace std;
  int hammingWeight(int n) {
        int count=0;
       while(n>0){
        int digi=n%2;
        if(digi==1)count++;
        n/=2;
       } 
       return count;
    }
int main(){
    int n;
    cin>>n;
    cout<<hammingWeight(n);
}    