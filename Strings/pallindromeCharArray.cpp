#include <bits/stdc++.h> 
#include<string>
#include<set>
using namespace std;
int getLength(string &arr){
    int count = 0;
    for (int i=0; arr[i]!='\0'; i++)
    {
        count++;
    }
    return count;
}

bool checkSpecial(char& a){
    set<char> ls = {'`','~','.',',','/','?',';',':','!','@','#','$','%','^','&','*','=','-','+','_',' '};
    auto it = ls.find(a);
    if(it!=ls.end()){
        return true;
    }
    return false;
    
}
bool checkPalindrome(string& m)
{
    transform(m.begin(), m.end(), m.begin(), ::toupper);
    int i=0;
    int j=getLength(m)-1;
    while(i<=j){
        if(checkSpecial(m[i])){
            i++;
            continue;
        }
        if(checkSpecial(m[j])){
            j--;
            continue;
        }
        if(m[i]!=m[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}
int main(){
    string s = "codingninjassajNiNgNidoc";
    // cout<<upperCase(s);
    cout<<checkPalindrome(s)<<" "<< s;
}