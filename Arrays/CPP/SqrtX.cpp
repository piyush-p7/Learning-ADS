#include<iostream>
using namespace std;
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

    int main(){
        int num = 0;
        cout<<"Enter the number: ";
        cin>>num;
        int sqrt = mySqrt(num);
        cout<<"Square root of "<<num<<" is "<<sqrt<<".";
    }