#include<iostream>
using namespace std;

void getValues(int arr[], int size){
    cout<<"Enter the Values of the array: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}

void dupliArr(int arr[],int size){
    int dupliArr[10];
    int index=0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                dupliArr[index]=arr[i];
                index++;
            }
        }
    }
    cout<<"Duplicate values are: ";
    for(int i=0;i<index;i++){
        cout<<dupliArr[i]<<" ";
    }
}

int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr[10];
    getValues(arr,size);
    dupliArr(arr,size);

}