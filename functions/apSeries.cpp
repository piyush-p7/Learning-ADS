#include <stdio.h>
#include <math.h>

void apValues(int a_1, int d, int num){
    // a_n	=	the nᵗʰ term in the sequence
    // a_1	=	the first term in the sequence
    // d	=	the common difference between terms
    int a_n = a_1 +(num-1)*d;
    int ans = 0;
    for(int i=1;i<=num && ans<=a_n;i++){
        ans = a_1 +(i-1)*d;
        cout << ans << " ";
    }

}

int main(){

}