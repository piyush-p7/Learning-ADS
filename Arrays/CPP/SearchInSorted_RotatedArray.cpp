#include<iostream>
#include <array>
using namespace std;
int binarySearch(int arr[],int s,int e,int k){
    int start = s;
    int end = e;
    int mid = start + (end-start)/2;
    while (start<=end)
    {
        if (arr[mid]==k)
        {
            return mid;
        }
        else if (arr[mid]<k)
        {
            start = mid+1;
        }
        else if (arr[mid]>k)
        {
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
    
}
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
    return s;
    
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
    int key=0;
    cout<<"Enter the value whose index is to be found: ";
    cin>>key;
    int pivotIndex = pivot(arr,size);
    cout<<"Pivot element at: "<<pivotIndex;
    if (key>=arr[pivotIndex] && key<=arr[size-1])
    {//Line 2
        cout<<"\nKey Found at: "<<binarySearch(arr,pivotIndex,size-1,key);
    }
    else
    {//line 1
        cout<<"\nKey Found at: "<<binarySearch(arr,0,pivotIndex-1,key);
    }
    
    
}