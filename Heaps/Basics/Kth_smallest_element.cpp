#include<iostream>
#include<queue>
using namespace std;

int findKthSmallest(int arr[], int n , int k){
    // create a max heap
    priority_queue<int>pq;
    for ( int i = 0; i < k; i++){
        pq.push(arr[i]);
    }

    for ( int i = k ; i < n ; i++){
        if(arr[i] < pq.top()){
            pq.pop();
            pq.push(arr[i]);
        }
    }
      return pq.top();
}

int main(){
    int arr[] = {9,10,5,20,4,15};
        int n = 5;
        int k = 2;
        int ans = findKthSmallest(arr,n,k);
        cout << "Ans = "<< ans;
        return 0;
    
}