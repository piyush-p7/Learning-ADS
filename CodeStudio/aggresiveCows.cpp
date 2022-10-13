// Problem statement - Plot cows such that min distance between any two cows is maximum.
stalls -> vector with values of stall number.
k -> number cows.

Code below:
bool isPossible(vector<int> &stalls, int k, int mid){
    int cowCount=1;
    int pos = stalls[0];
    for (int i = 0; i < stalls.size(); i++)
    {
        if (stalls[i] - pos >= mid)
        {
            cowCount++;
            if (cowCount == k)
            {
                return true;
            }
            pos = stalls[i];
        }
        
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());
    int s = 0;
    int n = stalls.size();
    int e=stalls[n-1];
    int ans = -1;
    int mid = s + (e-s)/2;
    
    while(s<=e) {
        if(isPossible(stalls, k, mid, n)) {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}