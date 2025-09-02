
class compare{
    public:
    bool operator()(ListNode* a, ListNode* b){
        return a-> val > b->val;
    }
};


class Solution(){
    public:

    ListNode* mergeKLists(vector<ListNode*>&lists){
         // create a map
         priority_queue<ListNode*,vector<ListNode*>,compare> minHeap;

         int k = lists.size();

         if ( k == 0)
         return NULL;

         for ( int i = 0; i < k ; i++){
            if(lists[i] != NULL){
                minHeap.push(lists[i]);
            }
         }

         ListNode* head = NULL;
         ListNode* tail = NULL;

         while(!minHeap.empty()){
            // step 1: fetch top elements of heap
            ListNode* temp = minHeap.top();
            minHeap.pop();

            // step 2: insert the top element in the ans vector

            if(head == NULL){
                head = temp;
                tail = temp;

                // step 3: insert further elements
                if(tail -> next != NULL){
                    minHeap.push(tail->next);
                }
                else {
                    tail->next = temp;
                    tail = temp;
                    // insert the element
                    if(tail -> next != NULL){
                    minHeap.push(tail->next);
                }
            }
           
         }
          return head;
    }
}

}