#include<iostream>
#include<queue>
#include<vector>
using namespace std;

class info{
    public:
    int data;
    int row;
    int col;
    info(int data, int row, int col){
        this-> data = data;
        this-> row = row;
        this->col = col;
    }
};

class compare{
    public:
    bool operator()(info* a, info* b){
        return a->data > b-> data;
    }
};


vector<int>mergeKSortedArrays(int arr[][4], int k , int n){
    // create a priority queue
    priority_queue<info*, vector<info*>,compare>minHeap;

    // insert first k elements
    for ( int i = 0; i < k; i++){
       info* temp = new info(arr[i][0],i,0);
       minHeap.push(temp);
    }

    vector<int>ans;
    while(!minHeap.empty()){
        info* temp = minHeap.top();
        int topElement = temp->data;
        int topRow = temp->row;
        int topCol = temp->col;
        // pop this
        minHeap.pop();

        // step 2: top element remove and insert in ans vector
        ans.push_back(topElement);

        // step 3: insert new element;
        if(topCol+1 < n){
            info* newTemp = new info(arr[topRow][topCol+1], topRow, topCol+1);
            minHeap.push(newTemp);
        }
    }
       return ans;
}

int main(){
    int arr[][4] = {{2,4,6,8},{1,3,5,7},{0,9,10,11}};
    int k = 3;
    int n = 4;
    vector<int>ans = mergeKSortedArrays(arr,k,n);
    for(auto i : ans){
        cout<<i<<" ";
    }
    return 0;
}