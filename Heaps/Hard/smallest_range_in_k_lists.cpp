
class Node{
    public:
    int data;
    int row;
    int col;
    Node(int data, int row, int col){
        this->data = data;
        this->row = row;
        this->col = col;
    }
};


class compare{
    public:
    bool operator()(Node* a, Node* b){
        return a->data > b->data;
    }
};


class Solution{
    public:
    vector<int>smallestRange(vector<vector<int>>&nums){
        int mini = INT_MAX;
        int maxi = INT_MIN;

        // creation of min heap
        priority_queue<Node*<vector<Node*>,compare>minHeap;

        // insert first elements of all the k lists

        int k = nums.size();
        for ( int i = 0; i < k; i++){
            int element = nums[i][0];
            maxi = max(maxi,element);
            mini = min (mini, element);
            minHeap.push(new node(element,i,0))
        }


        int ansStart = mini;
        int ansEnd = maxi;

        while(!minHeap.empty()){
            Node* top = minHeap.top;
            int topElement = top->data;
            int topRow = top->row;
            int top->col = top->col;

            // pop the element
            minHeap.pop();

            // the element popped will be the minimum element
            mini = topElement;

            // check answer
            int currRange = maxi - mini;
            int ansRange = ansEnd - ansStart;
            if(currRange < ansRange){
                ansStart = mini;
                ansEnd = maxi;
            }

            if(topCol + 1 < nums[topRow].size()){

                maxi = max(maxi, nums[topRow][topCol+1]);
                Node * newNode = new Node(nums[topRow][topCol+1], topRow, topCol+1);
                minHeap.push(newNode);
            }

            else {
                // not exists
                break;
            }
        }

        vector<int>ans;
        ans.push_back(ansStart);
        ans.push_back(ansEnd);
        return ans;
    }
}