// Given an array, find a product of all array elements.

// Examples : 

// Input  : ar[] = {1, 2, 3, 4, 5}
// Output : 120
// Product of array elements is 1 x 2
// x 3 x 4 x 5 = 120.

// Input  : ar[] = {1, 6, 3}
// Output : 18
#include <iostream>
#include <vector>
using namespace std;

vector<int> arraySpecial(vector<int> &num){
    vector<int> ans;
    int index = 0;
    while(index<num.size()){
        int pro = 1;
        for(int i=0;i<num.size();i++){
            if(i!=index) pro*=num[i];
        }
        ans.push_back(pro);
        index++;
    }
    return ans;
}

void printArray(vector<int> &ans){
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<"\n";
}
int main() {
    vector<int> num = {1,2,3,4,5};
    vector<int> ans;
    ans = arraySpecial(num);
    printArray(ans);
    return 0;
}