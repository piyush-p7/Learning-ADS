// You are given an array of 0s and 1s in random order. 
// Segregate 0s on left side and 1s on right side of the array [Basically you have to sort the array]. 
// Traverse array only once. 

// Input array   =  [0, 1, 0, 1, 0, 0, 1, 1, 1, 0] 
// Output array =  [0, 0, 0, 0, 0, 1, 1, 1, 1, 1] 
#include<iostream>
#include <array>
using namespace std;
// first we count zeros out of size then fill the array with that number of zeros, 
// then fill 1s left from the size of the array

void sortArr(array<int,10>arr,int size){
    int count=0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==0)
        {
            count++;
        }
        
    }

    for (int i = 0; i < count; i++)
    {
        arr[i]=0;
    }
    for (int i = count; i < size; i++)
    {
        arr[i]=1;
    }
    cout<<"Sorted array is: ";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    

}


int main(){
    array<int,10>arr;
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    cout<<"Enter the values of array: ";
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    
    sortArr(arr,size);
}