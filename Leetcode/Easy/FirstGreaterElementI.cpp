// 496. Next Greater Element 
// The next greater element of some element x in an array is the first greater element that is to the right of x in the same array.

// You are given two distinct 0-indexed integer arrays nums1 and nums2, where nums1 is a subset of nums2.

// For each 0 <= i < nums1.length, find the index j such that nums1[i] == nums2[j] and determine the next greater element of nums2[j] in nums2. If there is no next greater element, then the answer for this query is -1.

// Return an array ans of length nums1.length such that ans[i] is the next greater element as described above.
Code: 
vector<int> findNextgreater(vector<int>&nums1, vector<int>&nums2){
    vector<int> ans(nums1.size(), -1);
    unordered_map<int, int> mp = {};
    stack<int> st;

    for (int i = 0; i < nums1.size(); i++){
        mp.insert({nums1[i], i});
        // mp[nums[i]] = i;
    }

    for (int i = 0; i < nums2.size(); i++){
        int cur = nums2[i];
        while (!st.empty() && cur > st.top())
        {
            int val = st.top();
            st.pop();
            int indx = mp[val];
            ans[indx] = cur;
        }

        if(mp.count(cur)){
            st.push(cur);
        }
        
    }
    return ans;
    
}

// Time Complexity: O(nums1.size() + nums2.size())