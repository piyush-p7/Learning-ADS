#include<iostream>
#include<vector>
using namespace std;
void selection(vector<int> &arr)  
{  
    int i, j, small;  
    int n = arr.size();
      
    for (i = 0; i < n-1; i++)    // One by one move boundary of unsorted subarray  
    {  
        small = i; //minimum element in unsorted array  
          
        for (j = i+1; j < n; j++)  
        if (arr[j] < arr[small])  
            small = j;  
        // Swap the minimum element with the first element  
        int temp = arr[small];  
        arr[small] = arr[i];  
        arr[i] = temp;  
    }
    cout<<"After sorting the vector: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }  
}  
void selectionSort(vector<int> &vec){
    int n = vec.size();
    for (int i = 0; i < n-1; i++)
    {
        int minIndex = i;
        for (int j = i+1; i < n; j++)
        {
            if (vec[j]<vec[minIndex])
            {
                minIndex = j;
            }
        }
        int temp = vec[minIndex];  
        vec[minIndex] = vec[i];  
        vec[i] = temp; 
    }
    cout<<"After sorting the vector: ";
    for (int i = 0; i < vec.size(); i++)
    {
        cout<<vec[i]<<" ";
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
    selection(vec);
    return 0;
}