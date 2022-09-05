#include<iostream>
#include<math.h>
using namespace std;

void setBits(int a, int b){
    int counter = 0;
    while(a!=0 || b!=0){
        if(a&1==1 || b&1==1){
            ++counter;
        }
        a=a>>1;
        b=b>>1;
    }
    cout<<counter;
}


int main(){
    int a = 0,b = 0;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    cout<<"No of Setbits are: ";
    setBits(a,b);
    
}