#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;

void getValue(int arr[],int size){
    cout<<"Enter the values\n";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}

void printSum(int arr[],int size){
    int sum = 0;
    for(int i=0;i<size;i++){
        sum = sum + arr[i];

    }
    cout<<"Sum of values are :"<<sum;
}


int main(){
    int size;
    cin>>size;
    int arr[10];
    getValue(arr,size);
    printSum(arr,size);
}