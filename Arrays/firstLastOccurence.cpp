
#include<iostream>
#include<array>
using namespace std;

int firstOcurr(int arr[],int size, int key){
    int low = 0;
    int high = size - 1;
    int mid = low + (high - low)/2;  
    int ans = 0;
    while (low<=high)
    {
        if (arr[mid]==key)
        {
            ans = mid;
            high = mid - 1;
        }
        else if (arr[mid]<key)
        {
            low = mid + 1;
        }

        else if (arr[mid]>key)
        {
            high = mid - 1;
        }
        mid = low + (high - low)/2; 
    }
    return ans;
}


int lastOcurr(int arr[],int size, int key){
    int low = 0;
    int high = size - 1;
    int mid = low + (high - low)/2;  
    int ans = 0;
    while (low<=high)
    {
        if (arr[mid]==key)
        {
            ans = mid;
            low = mid + 1;
        }
        else if (arr[mid]<key)
        {
            low = mid + 1;
        }

        else if (arr[mid]>key)
        {
            high = mid - 1;
        }
        mid = low + (high - low)/2; 
    }
    return ans;
}


int main(){
    int arr[11] = {1,2,3,3,3,3,3,3,3,3,5};
    int first = firstOcurr(arr,11,3);
    int last = lastOcurr(arr,11,3);

    cout<<"First occurence of the number is : "<<first<<endl;
    cout<<"Last occurence of the number is : "<<last<<endl;
}