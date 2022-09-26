// 56. Merge Intervals
// Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, and return an array of the non-overlapping intervals that cover all the intervals in the input.

// Example 1:
// Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
// Output: [[1,6],[8,10],[15,18]]
// Explanation: Since intervals [1,3] and [2,6] overlap, merge them into [1,6].
code below:
class solution{
  public:
  vector<vector<int>> merge(vector<vector<int>>&intervals){
    sort(intervals.begin(),intervals.end());
    int size = intervals.size();
    vector<vector<int>> ans;
    for(int i=0;i<size;i++){
      if(ans.empty()){
        ans.push_back(intervals[i]);
      }
      else{
        <vector<int>&v = ans.back();
        if(v[1] >= intervals[i][0]){
          v[1] = max(v[1],intervals[i][1]);
        }
        else{
          ans.push_back(intervals[i]);
        }
      }
    }
    return ans;
  }
};
