// You are given a string 'S. Your task is to check whether
// the string is palindrome or not. For checking palindrome
// consider alphabets and numbers only and ignore the
// symbols and whitespaces.

// Example
// Let S "c1 0$d@eeD olc".
// If we ignore the special characters,
// whitespaces and convert all uppercase
// letters to lowercase, we get S =
// "clodeedo1c", which is a palind rome . Hence,
// the given string is also a palindrome .

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