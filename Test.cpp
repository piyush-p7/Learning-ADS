#include<iostream>
#include<vector>
using namespace std;
string add(string num1, string num2){
    string ans;
    int len1 = num1.length();
    int len2 = num2.length();
    int carry = 0;
    for (int i = len1-1,j=len2-1; i >= 0,j>=0; i--,j--)
    {
        /* code */
    }
    
    return ans;
}
int main(){
    string num1 = "123";
    string num2 = "12";
    cout<<add(num1,num2);
}