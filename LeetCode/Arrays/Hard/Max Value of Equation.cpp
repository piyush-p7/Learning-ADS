1499. Max Value of Equation

You are given an array points containing the coordinates of points on a 2D plane, sorted by the x-values, where points[i] = [xi, yi] such that xi < xj for all 1 <= i < j <= points.length. You are also given an integer k.
Return the maximum value of the equation yi + yj + |xi - xj| where |xi - xj| <= k and 1 <= i < j <= points.length.
It is guaranteed that there exists at least one pair of points that satisfy the constraint |xi - xj| <= k.
Example 1:

Input: points = [[1,3],[2,0],[5,10],[6,-10]], k = 1
Output: 4
Explanation: The first two points satisfy the condition |xi - xj| <= 1 and if we calculate the equation we get 3 + 0 + |1 - 2| = 4. Third and fourth points also satisfy the condition and give a value of 10 + -10 + |5 - 6| = 1.
No other pairs satisfy the condition, so we return the max of 4 and 1.
Code Below:
class Solution {
public:
    int findMaxValueOfEquation(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,int>>p;
        int ans=INT_MIN;
        for(int i=0;i<points.size();i++){
			// if  xj - xi > k then we have to remove that from the queue as it can not longer 
			// contribute to the answer which is given in the question itself
            while(!p.empty() && (points[i][0]-p.top().second)>k){
                p.pop();
            }
			
			// now if the queue is not empty then the top of the queue is having 
			// maximum value of  ( yi-xi) so we update our answer with  (top of the queue) + currvalue
            if(!p.empty()){
                ans=max(ans,points[i][0]+points[i][1]+p.top().first);
            }
			
			// inserting ( yi-xi ) into the queue 
            p.push({points[i][1]-points[i][0],points[i][0]});
        }
        return ans;
    }
};