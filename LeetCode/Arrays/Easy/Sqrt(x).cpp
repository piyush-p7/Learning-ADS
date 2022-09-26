// 69.Sqaure root of x
// Given a non-negative integer x, compute and return the square root of x.
// Since the return type is an integer, the decimal digits are truncated, and only the integer part of the result is returned.
// Note: You are not allowed to use any built-in exponent function or operator, such as pow(x, 0.5) or x ** 0.5.

// Example 1:
// Input: x = 4
// Output: 2

code below:
class Solution {
public:
    int mySqrt(int x) {
        int left = 1, right = x / 2 + 1;
        while (left <= right) {
            int mid = left + ((right - left) / 2);
            // if we will do mid*mid the value can exceed the value of int datatype
            // thats why we shfted it to the right side hence going in the denominator.
            if (mid > x / mid) {
                right = mid - 1;
            }
            // if we will do mid*mid the value can exceed the value of int datatype
            // thats why we shfted it to the right side hence going in the denominator. 
            else if (mid < x / mid) {
                left = mid + 1;
            } else { // mid*mid == ans i.e (x) in the question.
                return mid;
            }
        }
        return right; 
    }
};