#include<bits/stdc++.h>
using namespace std;
void insertionSort(vector<int>& arr){
    int i = 1;
    while (i<arr.size())
    {
        int temp = arr[i];
        int j = i - 1;
        while (j>=0)
        {
            if (arr[j]>temp)
            {
                arr[j+1] = arr[j];
                
            }
            else if(arr[j]<=temp){
                break;
            }
            j--;
        }
        arr[j+1] = temp;
        i++;
    }
    
}
void printArr(vector<int>&arr){
    for(int i = 0; i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    vector<int> arr = {5,4,3,2,1,0};
    insertionSort(arr);
    printArr(arr);
    return 0;
}