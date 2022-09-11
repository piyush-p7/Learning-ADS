#include<iostream>
#include <array>
using namespace std;

void sortArr(array <int,10> arr, int size){
    int i = 0;
    int j = size-1;
    int mid = 0;
    char check = 'P';
    // Using one of my favourite Dutch national flag problem (Three pointer approach);
    while (mid<=j)
    {
        if (arr[mid]<0){
            check = 'N';
        }
        else
        {
            check = 'P'; 
        }
        
        switch (check)
        {
        case 'P':
            swap(arr[mid],arr[j]);
            j--;
            break;
        
        case 'N':
            swap(arr[mid++],arr[i++]);
            break;
        
        default:
            cout<<"wrong\n";
            break;
        }
    }
    cout<<"Negatives after taking to one side : ";
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