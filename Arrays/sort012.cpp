// SORT 0-1-2

// Dutch National Flag problem

#include<iostream>
#include<array>
using namespace std;


void sort012(array<int,10>arr,int size){
    int low = 0;
    int high = size-1;
    int mid = 0;
    while(mid<=high){
        switch(arr[mid]){
            case 0:
                swap(arr[low++],arr[mid++]);
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(arr[high--],arr[mid]);
                break;
        }
    }
    //Printing the values.
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    
}
int main(){
    array<int,10> arr = {1,0,0,2,1,1,0,0,2,1};
    sort012(arr,10);

}
