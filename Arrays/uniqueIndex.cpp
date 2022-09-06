#include<iostream>
using namespace std;

int getValue(int arr[],int size){
    cout<<"Enter the duplicate values: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}

int findUnique(int arr[],int size){
    cout<<"Array with unique Numbers: ";
    for (int i=0; i<size; i++)
    {
        int j;
        for (j=0; j<i; j++){
           if (arr[i] == arr[j]){
               break;
            }
        }
        if (i == j){
           cout << arr[i] << " ";
        }
    }
}


int main(){
    int size;
    cout<<"Enter the size: ";
    cin>>size;
    int arr[10];
    getValue(arr,size);
    findUnique(arr,size);
}