#include<iostream>
#include<vector>
using namespace std;  
string longestPalindrome(string& s){
    string str = "";
    int strLen = 0;
    for(int i=0;i<s.size();i++){
        //For Odd
        int l = i;
        int r = i;
        while(l>=0 && r<s.size() && s[l]==s[r]){
            if(r-l+1>strLen){
                str = s.substr(r, r-l+1);
                strLen = r-l+1;
            }
            r++;
            l--;
        }
        //For Even
        l = i;
        r = i+1;
        while(l>=0 && r<s.size() && s[l]==s[r]){
            if(r-l+1>strLen){
                str = s.substr(r, r-l+1);
                strLen = r-l+1;
            }
            r++;
            l--;
        }
    }
    return str;
}

int main(){
    string s = "babad";
    cout<<longestPalindrome(s);
}