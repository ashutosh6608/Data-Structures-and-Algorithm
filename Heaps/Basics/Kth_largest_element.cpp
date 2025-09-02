#include<iostream>
#include<queue>
using namespace std;

findKthLargest(int arr[], int n , int k){

    // min heap
    priority_queue<int, vector<int>,greater<int>>minHeap;

    for (int i = 0; i < k ; i++){
        minHeap.push(arr[i]);
    }

    for ( int i = k; i < n ; i++){
       if (arr[i] > minHeap.top()){
        minHeap.pop();
        minHeap.push(arr[i]);
       }
    }
    return minHeap.top();
}


int main(){
    int arr[] = {10,5,8,1,4,3};
    int n = 6;
    int k = 2;

    int ans = findKthLargest(arr,n,k);
    cout << "Ans " << ans;
    return 0;
}