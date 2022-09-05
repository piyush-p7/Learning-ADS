#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

void apValues(int a_1, int d, int num){
    // a_n	=	the nᵗʰ term in the sequence
    // a_1	=	the first term in the sequence
    // d	=	the common difference between terms
    int a_n = a_1 +(num-1)*d;
    int ans = 0;
    for(int i=1;i<=num && ans<=a_n;i++){
        ans = a_1 +(i-1)*d;
        printf("%d ",ans);
    }

}

int main(){
    cout<<"Enter the a1 value - ";
    int a1,d,n;
    cin>>a1;
    cout<<"Enter the d value - ";
    cin>>d;
    cout<<"Enter the n value - ";
    cin>>n;
    apValues(a1,d,n);
    
}