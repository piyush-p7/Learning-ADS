// There are paint n boards of length {l1, l2…ln} and there are k painters available. Each painter takes 1 unit of time to paint 1 unit of the board.
// The problem is to find the minimum time to get this job done under the constraints that any painter will only paint continuous sections of boards.
// Example 1 :
// Input : k = 10, Board[] = [1, 8, 11, 3]
// Output : 11

// Code below:
class PaintersPartion{
public:
    bool isPossible(vector<int> &boards, int k, int mid){
    int painterCount=1;
    int sum = 0;
    for(int i=0;i<boards.size();i++){
        if(sum+boards[i]<=mid){
            sum += boards[i];
        }
        else{
            painterCount++;
            if(painterCount>k || boards[i]>mid){
                return false;
            }
            sum = boards[i];
        }
    }
    return true;
}
    int findLargestMinDistance(vector<int> &boards, int k)
    {
        int s = 0;
        int sum = 0;
        for(int i=0;i<boards.size();i++){
            sum+=boards[i];
        }
        int ans=0;
        int e = sum;
        while(s<=e){
            int mid = s + (e-s)/2;
            if(isPossible(boards,k,mid)){
                e = mid-1;
                ans = mid; 
            }
            else{
                s = mid+1;
            }
        }
        return ans;
    }
};
