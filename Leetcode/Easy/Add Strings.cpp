// 415. Add Strings
// Given two non-negative integers, num1 and num2 represented as string, return the sum of num1 and num2 as a string.
// You must solve the problem without using any built-in library for handling large integers (such as BigInteger). 
// You must also not convert the inputs to integers directly.
// Example 1:

// Input: num1 = "11", num2 = "123"
// Output: "134"

// Code Below:
class Solution {
public:
    string addStrings(string num1, string num2) {
        int index_1 = num1.length() - 1;
        int index_2 = num2.length() - 1;
        int carry = 0;
        string ans;
        while(index_1>=0 || index_2>=0){
            if(index_1<0){
                ans.push_back(((num2[index_2]-48+carry)%10)+48);
                carry = (num2[index_2]-48+carry)/10;
                index_2--;
            }
            else if(index_2<0){
                ans.push_back(((num1[index_1]-48+carry)%10)+48);
                carry = (num1[index_1]-48+carry)/10;
                index_1--;
            }
            else{
                ans.push_back(((num1[index_1]-48+num2[index_2]-48+carry)%10)+48);
                carry = (num1[index_1]-48+num2[index_2]-48+carry)/10;
                index_1--;
                index_2--;
            }
        }
        if(carry){
            ans.push_back(carry+48);
        }
        for(int i=0,j=ans.size()-1;i<=j;i++,j--){
            swap(ans[i], ans[j]);
        }
        return ans;
    }
};