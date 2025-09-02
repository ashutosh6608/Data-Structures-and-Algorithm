#include <iostream>
#include <queue>
using namespace std;

int minimumCost(int arr[], int n) {
    priority_queue<int, vector<int>, greater<int>> minHeap;
    
    for (int i = 0; i < n; i++) {
        minHeap.push(arr[i]);
    }

    int mainSum = 0;

    while (minHeap.size() > 1) {
        int first = minHeap.top();
        minHeap.pop();

        int second = minHeap.top();
        minHeap.pop();

        int sum = first + second;
        mainSum += sum;

        minHeap.push(sum);
    }

    return mainSum;
}

int main() {
    int arr[] = {6, 4, 7, 2, 9};
    int n = 5;

    int ans = minimumCost(arr, n);
    cout << "Ans is " << ans << endl;

    return 0;
}
