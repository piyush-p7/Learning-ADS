#include<iostream>
#include <array>
using namespace std;

int pivot(int arr[],int size){
    int s = 0;
    int e = size-1;
    int mid = s + (e-s)/2;
    while (s<e)
    {
        if (arr[0]<=arr[mid])
        {
            s = mid + 1;
        }
        else {
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    //return s;
    cout<<"Pivot Element is at: "<<s << "\nThat is: "<<arr[s];
    
}

int main(){
    int arr[10];
    int size;
    cout<<"Enter the size of Rotated array: ";
    cin>>size;
    cout<<"Enter the values of Rotated array: ";
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    
    pivot(arr,size);
}