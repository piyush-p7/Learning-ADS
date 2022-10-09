// Given an array ‘pages’ of integer numbers, where ‘pages[i]’ represents the number of pages in the ‘i-th’ book. 
// There are ‘m’ number of students, and the task is to allocate all the books to their students. 
// Allocate books in a way such that:
// 1. Each student gets at least one book.
// 2. Each book should be allocated to a student.
// 3. Book allocation should be in a contiguous manner.
// You have to allocate the books to ‘m’ students such that the maximum number of pages assigned to a student is minimum.

//Link: https://www.codingninjas.com/codestudio/library/book-allocation-problem

// Sample Input 1:
// 2
// 4 2
// 12 34 67 90
// 4 4
// 5 17 100 11
// Sample Output 1:
// 113
// 100

Code:
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