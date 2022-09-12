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

void searchNum(int arr[],int size,int n){
    bool check = false;
    for(int i=0;i<size;i++){
        if(arr[i]==n){
            check = true;
            cout<<"Number at "<<i+1<<" position";
        }
    }
    if (check == false)
    {
        cout<<"Number is not there"<<endl;
    }
       
}


int main(){
    int size;
    int num;
    cin>>size;
    int arr[10];
    getValue(arr,size);
    cout<<"Enter the number to search : ";
    cin>>num;
    searchNum(arr,size,num);
}