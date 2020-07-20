/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int Solution::solve(ListNode* A, int B) {
    int count = 0;
    ListNode* slow = A;
    ListNode* fast = A;
    
    while (fast != NULL && fast->next != NULL && fast->next->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
        count++;
    }
    if (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        count++;
    }
    if (count < B) return -1;
    ListNode* tmp = A;
    while (B > 0) {
        tmp = tmp->next;
        B--;
    }
    ListNode* t = A;
    while (tmp != slow) {
        t = t->next;
        tmp = tmp->next;
    }
    return t->val;
}
