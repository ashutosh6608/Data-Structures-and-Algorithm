#include<iostream>
#include<queue>
using namespace std;



int lastStoneWeight(int arr[], int n){
    priority_queue<int>maxHeap;
    int stone = 0;


    for ( int i = 0; i < n ; i++){
        maxHeap.push(arr[i]);
    }

     while(maxHeap.size() > 1){
        int element1 = maxHeap.top();
        maxHeap.pop();

        int element2 = maxHeap.top();
        maxHeap.pop();

        int stone = element1 - element2;
        maxHeap.push(stone);
     }
     return maxHeap.top();
}



int main(){
    int arr[] = {2,7,4,1,8,1};
    int n = 6;

    int ans = lastStoneWeight(arr,n);
    cout << "Ans is " << ans << endl;
}