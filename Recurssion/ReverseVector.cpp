#include<bits-stdc++.h>
using namespace std;
void reverseRecur(vector<int> &vec, int i, int j){
    if(i>=j){
        return;
    }

    swap(vec[i], vec[j]);
    reverseRecur(vec, i+1, j-1);
}

void printVec(vector<int> vec){
    for (int i = 0; i < vec.size(); i++)
    {
        cout<<vec[i]<<" ";
    }
    
}
int main(){
    vector<int> v;
    int size = 0;
    cout<<"How many number want to add: ";
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        int value = 0;
        cout<<"Enter the value: ";
        cin>>value;
        v.push_back(value);
    }
    reverseRecur(v, 0, v.size()-1);
    printVec(v);

}