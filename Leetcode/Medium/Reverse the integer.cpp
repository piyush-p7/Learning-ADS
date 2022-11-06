// 7. Reverse Integer
// Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.
// Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

// Example 1:
// Input: x = 123
// Output: 321

// Example 2:
// Input: x = -123
// Output: -321
Code below:
class Solution {
public:
    int reverse(int x) {
        int ans = 0;
        
        while(x!=0){
            int digit = x%10;//getting out digit 
            
            if((ans>INT_MAX/10)||(ans<INT_MIN/10)){ 
                // For checking whether the ans lies in range of 
                // intmMAX and intMIN
                return 0;
            }
            
            ans = (ans*10)+digit;
            
            x=x/10;
        }
        return ans;
    }
};
