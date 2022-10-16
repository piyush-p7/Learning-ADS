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
 
// This function is used to swap two elements of the array.
void swap(int *first, int *second)
{
    int temp = *first;
    *first = *second;
    *second = temp;
}

void BubbleSort(vector<int>& arr, int n)
{   
    // This is used to skip extra iterations in case of sorted array.
    bool flag;

    for (int i = 0; i < n - 1; i++)
    {
        flag = false;
        for (int j = 0; j < n - i - 1; j++)
        {   
            // If the adjacent element is not sorted, swap the elements.
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                flag = true;
            }
        }
        
        // If the array is already sorted, break from the current loop iteration.
        if (flag == false) {
            break;
        }
    }

    return;
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
    BubbleSort(vec,size);
    printVec(vec);
    return 0;
}