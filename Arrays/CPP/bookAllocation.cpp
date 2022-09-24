// Given a number of pages in N different books and M students. 
// The books are arranged in ascending order of the number of pages. 
// Every student is assigned to read some consecutive books. 
// The task is to assign books in such a way that the maximum number of pages assigned to a student is minimum.

// Example : 

// Input : pages[] = {12, 34, 67, 90} , m = 2
// Output : 113
// Explanation: There are 2 number of students. Books can be distributed in following fashion : 
// 1) [12] and [34, 67, 90]
// Max number of pages is allocated to student ‘2’ with 34 + 67 + 90 = 191 pages
// 2) [12, 34] and [67, 90] Max number of pages is allocated to student ‘2’ with 67 + 90 = 157 pages 
// 3) [12, 34, 67] and [90] Max number of pages is allocated to student ‘1’ with 12 + 34 + 67 = 113 pages

// Of the 3 cases, Option 3 has the minimum pages = 113.
code Below:
#include <bits/stdc++.h> 
bool isPossible(vector<int> arr, int n, int m,int mid){
    int studentCount = 1;
    int pageSum = 0;
    for(int i=0;i<n;i++){
        if(pageSum + arr[i]<=mid){
            pageSum += arr[i];
        }
        else{
            studentCount++;
            if(studentCount > m || arr[i]>mid){
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}

int allocateBooks(vector<int> arr, int n, int m) {
    int s = 0;
    int sum = 0;
    for(int i=0;i<n;i++){
        sum +=arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s +(e-s)/2;
    while(s<=e){
        if(isPossible(arr, n, m, mid)){
            ans = mid;
            e = mid-1;
        }
        else{
            s = mid+1;
        }
        mid = s +(e-s)/2;
    }
    return ans;
}