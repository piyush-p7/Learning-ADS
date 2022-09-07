// Given an array of N integers, and a number sum, the task is to find the
// number of pairs of integers in the array whose sum is equal to sum. 
// Examples: Input: arr[] = {1, 5, 7, -1}, sum = 6. 
// Output: 2. Explanation: Pairs with sum 6 are (1, 5) and (7, -1).
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
        for (int j = i+1; j < size; j++)
        {
            if(arr[i]+arr[j]==num){
                count++;
            }
        }
        
    }
    cout<<"Number of pair sum are: "<<count;
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
