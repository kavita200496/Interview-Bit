/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::solve(ListNode* A) {
    int zero = 0;
    int one = 0;
    
    ListNode* tmp = A;
    while (tmp) {
        if (tmp->val == 0) zero++;
        else one++;
        tmp = tmp->next;
    }
    tmp = A;
    while (zero--) {
        tmp->val = 0;
        tmp = tmp->next;
    }
    while (tmp) {
        tmp->val = 1;
        tmp = tmp->next;
    }
    return A;
}
