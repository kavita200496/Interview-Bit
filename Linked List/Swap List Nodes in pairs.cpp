/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::swapPairs(ListNode* A) {
    ListNode* curr = A;
    ListNode* n = NULL;
    ListNode* prev = NULL;
    int count = 2;
    
    while (curr && count) {
        n = curr->next;
        curr->next = prev;
        prev = curr;
        curr = n;
        count--;
    } 
    
    if (n != NULL) {
        A->next = swapPairs(n);
    }
    return prev;
}
