/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
ListNode* reverse(ListNode* head, int B) {
    ListNode* curr = head;
    ListNode* n;
    ListNode* prev = NULL;
    int count = B;
    
    while (curr != NULL && count) {
        n = curr->next;
        curr->next = prev;
        prev = curr;
        curr = n;
        count--;
    }
    if (head != NULL) {
        head->next = curr;
    }
    count = B;
    while (count > 1  && curr ) {
        curr = curr->next;
        count--;
    }
    if (curr != NULL) {
        curr->next = reverse(curr->next, B);
    }
    return prev;
}

ListNode* Solution::solve(ListNode* A, int B) {
    A = reverse(A, B);
 
    return A;
}
