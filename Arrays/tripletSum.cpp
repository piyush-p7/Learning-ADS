// Given an array and a value, find if there is a triplet in array whose sum is equal to the given value. 
// If there is such a triplet present in array, then print the triplet and return true. Else return false.

// Examples: 
// Input: array = {12, 3, 4, 1, 6, 9}, sum = 24; 
// Output: 12, 3, 9 
// Explanation: There is a triplet (12, 3 and 9) present 
// in the array whose sum is 24. 
// Input: array = {1, 2, 3, 4, 5}, sum = 9 
// Output: 5, 3, 1 
// Explanation: There is a triplet (5, 3 and 1) present 
// in the array whose sum is 9.
#include<iostream>
#include<math.h>
using namespace std;

int getValues(int arr[],int size){
    cout<<"Enter the values: ";
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }   
}

int checkPair(int arr[],int size,int num){
    int count=0;
    for(int i=0;i<size;i++){
        for (int j = i+1; j < size; j++){
            for (int k = j+1; k < size; k++)
            {
                if(arr[i]+arr[j]+arr[k]==num){
                    cout<<"Numbers forming the triplet are: "<<arr[i]<<" "<<arr[j]<<" "<<arr[k];
                    count++;
                }
            }
        }
    }
    cout<<"\nNumber of triplet sum are: "<<count;
}

int main(int argc, char const *argv[])
{
    int size=0;
    cout<<"Enter the size of array: ";
    cin>>size;
    int arr[10];
    getValues(arr,size);
    int num=0;
    cout<<"Enter the number for pair sum inside array: ";
    cin>>num;
    checkPair(arr,size,num);
    return 0;
}
