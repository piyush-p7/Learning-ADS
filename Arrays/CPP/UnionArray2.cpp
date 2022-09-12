#include<iostream>
#include<set>
using namespace std;

void getValues(int arr[],int size){
    cout<<"Enter the values of the array: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}

void unions(int arr1[],int size1,int arr2[],int size2){
    cout<<"Union of the two arrays is: ";
    int union1[10];
    int index=0;

    
    if(size1>=size2){
        for(int i=0;i<size1;i++){
            union1[index]=arr1[i];
            index++;
        }
        for(int j=0;j<size2;j++){
            union1[index]=arr2[j];
            index++;
        }
    }
    else{
        for(int i=0;i<size2;i++){
            union1[index]=arr2[i];
            index++;
        }
        for(int j=0;j<size1;j++){
            union1[index]=arr1[j];
            index++;
        }
    }
    //Using the set, as not to get duplicate values.
    set<int> s(union1, union1+index);
    if (s.empty())
    {
        cout<<"None";
    }
    else{
        for(auto i=s.begin();i!=s.end();i++){
            cout << *i << " ";
        }
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
    unions(arr1,size1,arr2,size2);
}