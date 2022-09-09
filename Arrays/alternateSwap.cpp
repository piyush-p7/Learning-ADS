#include<iostream>
using namespace std;

int getValues(int arr[],int size){
    cout<<"Enter the values: ";
    for(int i=0;i<size;i++){
        cin >> arr[i];
   }
}

int swapAlter(int arr[],int size){
    cout<<"Alternately Swapped array: ";
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}



int main(){
    int size;
    cout<<"Enter the size: ";
    cin >> size;
    int arr[10];
    getValues(arr,size);
    swapAlter(arr,size);
 }