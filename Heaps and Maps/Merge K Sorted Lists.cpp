/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
struct Compare
{
    bool operator()(ListNode* const& a, ListNode* const& b) {
        return a->val > b->val;
    }
};

ListNode* Solution::mergeKLists(vector<ListNode*> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    if (A.empty()) return NULL;
    priority_queue<ListNode*, vector<ListNode*>, Compare> minheap;
   
    for (int i = 0; i < A.size(); i++) {
        if (A[i] != NULL)
            minheap.emplace(A[i]);
    }
    
    ListNode* head = new ListNode(0);
    ListNode* last = head;
    
    while (!minheap.empty()) {
        ListNode* p = minheap.top();
        minheap.pop();
        if (p->next != NULL) {
            minheap.push(p->next);
        }
        if (head == NULL) {
            head = p;
            last = p;
        }
        else {
            last->next = p;
            last = p;
        }
    }
    head = head->next;
    return head;
}
