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
double presicion(int num,int pre,int sqrt){
    double fact = 1;
    double ans = sqrt;
    for (int i = 0; i < pre; i++){
        fact = fact/10;
        for (double j = ans; j*j<num; j+=fact){
            ans = j;
        }
    }
    return ans;
}

int main(){
    int num = 0;
    cout<<"Enter the number: ";
    cin>>num;
    int sqrt = mySqrt(num);
    cout<<"Enter the presicion: ";
    int pre = 0;
    cin>>pre;
    double PreSqrt = presicion(num,pre,sqrt);
    cout<<"Square root of "<<num<<" is "<<PreSqrt<<".";
}