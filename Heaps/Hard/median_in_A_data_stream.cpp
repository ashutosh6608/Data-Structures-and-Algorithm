#include<iostream>
#include<queue>
#include<vector>
using namespace std;

void callMedian(double &median, priority_queue<int>& maxHeap, priority_queue<int,vector<int>,greater<int>>&minHeap, int element){
     

     if (maxHeap.empty() && minHeap.empty()) {
            // first element special case
            maxHeap.push(element);
            median = element;
            return;
        }



    if(minHeap.size() == maxHeap.size()){
          if(element > median){
            minHeap.push(element);
            median = minHeap.top();
          }
          else {
            maxHeap.push(element);
            median = maxHeap.top();
          }
    }

    else if(maxHeap.size() > minHeap.size()){
            if(element > median){
                minHeap.push(element);
                median = (minHeap.top() + maxHeap.top())/2.0;
            }
            else {
                int maxTop = maxHeap.top();
                maxHeap.pop();
                minHeap.push(maxTop);
                maxHeap.push(element);
                median = (minHeap.top() + maxHeap.top())/2.0;
            }
    }
    else {
            // maxHeap < minHeap
            if(element > median){
                int minTop = minHeap.top();
                minHeap.pop();
                maxHeap.push(minTop);
                minHeap.push(element);
                median = (minHeap.top() + maxHeap.top())/2.0;
            }
            else {
                maxHeap.push(element);
                median = (minHeap.top() + maxHeap.top())/2.0;
            }
    }
  
}  

int main(){
    int arr[6] = {5,7,2,9,3,8};
    int n = 6;

    double median = 0.0;

    priority_queue<int> maxHeap;
    priority_queue<int,vector<int>,greater<int>> minHeap;

    // handle first element separately
    median = arr[0];
    maxHeap.push(arr[0]);
    cout << "->" << median << " ";

    for ( int i = 1; i < n; i++){
        int element = arr[i];
        callMedian(median, maxHeap, minHeap, element);
        cout << "->" << median << " ";
    }
    cout << endl;
    return 0;
}