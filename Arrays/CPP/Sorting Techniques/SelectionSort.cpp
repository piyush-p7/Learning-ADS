#include<iostream>
#include<vector>
using namespace std;
void printVec(vector<int> &arr){
    cout<<"After sorting the vector: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    } 
}
 
void selectionSort(vector<int> &vec, int size){
    for (int i = 0; i < size-1; i++)
    {
        int minIndex = i;
        for (int j = i+1; j < size; j++)
        {
            if (vec[j]<vec[minIndex])
            {
                minIndex = j;
            }
        }
        swap(vec[i],vec[minIndex]);
    }
}
int main(){
    vector<int> vec;
    cout<<"Enter the size for vector: ";
    int size = 0;
    cin >> size;
    cout<<"Enter values: ";
    for (int i = 0; i < size; i++)
    {
        int value = 0; 
        cin >> value;
        vec.push_back(value);
    }
    selectionSort(vec,size);
    printVec(vec);
    return 0;
}