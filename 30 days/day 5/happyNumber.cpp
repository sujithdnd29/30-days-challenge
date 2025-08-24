#include<bits/stdc++.h>
using namespace std;
int squaresum(int n){
    int sum=0;
    while(n>0){
       int ld=n%10;
        n=n/10;
        sum+=pow(ld,2);

    }
    return sum;
}
    bool isHappy(int n) {
        if(n==1)return true;
       int slow=squaresum(n);
       int fast=squaresum(squaresum(n));
       while(slow!=fast){
        slow=squaresum(slow);
        fast=squaresum(squaresum(fast));
       }
       if(fast==1)return true;
       return false;
    }
    int main(){
        int n;
        cin>>n;
        cout<<isHappy(n);
    }