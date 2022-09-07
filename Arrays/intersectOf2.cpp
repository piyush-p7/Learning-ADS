#include<iostream>
using namespace std;

void getValues(int arr[],int size){
    cout<<"Enter the values of the array: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}

void intersect(int arr1[],int size1,int arr2[],int size2){
    cout<<"Intersection of the two arrays is: ";
    int intersect[10];
    int index=0;
    if(size1>=size2){
        for(int i=0;i<size1;i++){
            for(int j=0;j<size2;j++){
                if (arr1[i]==arr2[j])
                {
                    intersect[index]=arr1[i];
                    index++;
                }
            }
        }
    }
    else{
        for(int i=0;i<size2;i++){
            for(int j=0;j<size1;j++){
                if (arr2[i]==arr1[j])
                {
                    intersect[index]=arr2[i];
                    index++;
                }
            }
        }
    }
    
    for(int i=0;i<index;i++){
        cout<<intersect[i]<<" ";
    }

}

int main(){
    cout<<"Enter the size of first array: ";
    int size1 = 0;
    int size2 = 0;
    cin>>size1;
    cout<<"Enter the size of second array: ";
    cin>>size2;
    int arr1[10];
    int arr2[10];
    getValues(arr1,size1);
    getValues(arr2,size2);
    intersect(arr1,size1,arr2,size2);
}