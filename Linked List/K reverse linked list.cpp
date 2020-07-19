/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseList(ListNode* A, int B) {
    ListNode* curr = A;
    ListNode* n = NULL;
    ListNode* prev = NULL;
    int count = 0;
    
    while (curr != NULL && count < B) {
        n = curr->next;
        curr->next = prev;
        prev = curr;
        curr = n;
        count++;
    }
    if (n != NULL) {
        A->next = reverseList(n, B);
    }
    return prev;
}
