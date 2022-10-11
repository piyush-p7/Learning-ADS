#include<iostream>
#include<vector>
using namespace std;
int Smallest(vector<int> &nums,int i){
        int small = nums[i];
        return small;
    }
int main(){
        vector<int> nums;
        cout<<"Enter size: ";
        int size=0;
        cin>>size;
        cout<<"Enter the value: ";
        for (int i = 0; i < size; i++)
        {
            int value=0;
            cin>>value; 
            nums.push_back(value);
        }
        cout<<"Vector: ";
        for (int i = 0; i < size; i++)
        {
            cout<<nums[i]<<" ";
        }
        cout<<"\nLocation at index(0-"<<size-1<<"), we want: ";
        int val =0;
        cin>>val;
        if (val>size-1)
        {
            cout<<"Wrong index "<<val<<".\n";
            main();
        }
        else
        {
            int i = Smallest(nums,val);
            cout<<"Value at "<<val<<" is "<<i;
        }    
}