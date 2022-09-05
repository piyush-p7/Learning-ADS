#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;

void reverse(int arr[],int size){
    int start = 0;
    int end = size-1;
    cout<<"Reverse order of array is:\n";

    for(;start<=end;start++ , end--){
        swap(arr[start],arr[end]);

    }

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";

    }
}

void getValue(int arr[],int size){
    cout<<"Enter the values\n";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}

int main(){
    int size;
    cin>>size;
    int arr[5];
    getValue(arr,size);
    reverse(arr,size);
}