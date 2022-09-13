#include<iostream>
using namespace std;

void getValues(int arr[],int size){
    cout<<"Enter the values of the array: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}
void CyclicRotate(int arr[],int size){
    int temp = arr[size-1];
    for(int i=size-1;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
}

void printArray(int arr[],int size){
    cout<<"Cyclic raoted array: ";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main(){
    cout<<"Enter the size of first array: ";
    int size1 = 0;
    cin>>size1;
    int arr1[10];
    getValues(arr1,size1);
    CyclicRotate(arr1,size1);
    printArray(arr1,size1);
}