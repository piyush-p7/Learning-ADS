#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
//Find first and last ocurrence of an element.
void RightOccurence(vector<int>&arr,int size,int key){
    int RightOccur=-1;
    
    int start=0;
    int end=size-1;
    int mid = start + (end-start)/2;
    while (start<=end)
    {
        if(arr[mid]==key) {
            RightOccur = mid;
            start = mid+1;
        }
        else if (arr[mid]<key)
        {
            start = mid + 1;
        }
        else if (arr[mid]>key)
        {
            end = mid - 1;
        }
        mid = start + (end-start)/2;        
    }
    cout<<"\nOcurred at - "<<RightOccur<<" index";
    
}

void LeftOccurence(vector<int>&arr,int size,int key){
    int LeftOccur=-1;
    
    int start=0;
    int end=size-1;
    int mid = start + (end-start)/2;
    while (start<=end)
    {
        if(arr[mid]==key) {
            LeftOccur = mid;
            end = mid-1;
        }
        else if (arr[mid]<key)
        {
            start = mid + 1;
        }
        else if (arr[mid]>key)
        {
            end = mid - 1;
        }
        mid = start + (end-start)/2;        
    }
    cout<<"Ocurred at - "<<LeftOccur<<" index";
    
}

void getValue(vector<int>&arr,int size){
    cout<<"Enter the values\n";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}
void printValue(vector<int>&arr,int size){
    cout<<"\nValues: \n";
    for(int i=0;i<size;i++){
        cout<<arr.at(i)<<" ";
    }
}
int main(){
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    vector<int>arr(5);
    getValue(arr,size);
    int key;
    cout<<"Enter key value: ";
    cin>>key;
    LeftOccurence(arr,size,key);
    RightOccurence(arr,size,key);
    printValue(arr,size);
}