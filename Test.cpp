#include<bits/stdc++.h>
using namespace std;
    int numPairsDivisibleBy60(vector<int>& time) {
        int ans = 0;
        sort(time.begin(), time.end());
        for(int index = 0;index<time.size();index++){
            int start = 0;
            int end = time.size()-1;
            while(start<=end){
                int mid = start + (end-start)/2;
                cout<<"\nMid -> "<<time[mid];
                cout<<"\nIndex -> "<<time[index];
                int divSum = time[mid]+time[index];
                cout<<"\nSum -> "<<divSum<<"\n---------------------";
                if(divSum%60==0){
                    ans++;
                    start++;
                }
                if(divSum/60>1){
                    end= mid-1;
                }
                else{
                    start = mid+1;
                }
            }
        }
        return ans;
    }
int main(){
    vector<int> time = {439,407,197,191,291,486,30,307,11};
    sort(time.begin(), time.end());
    for(int i=0;i<time.size();i++){
        cout<<time[i]<<" ";
    }
    int ans = numPairsDivisibleBy60(time);
    cout<<"\nAnswer is -> "<<ans;
}