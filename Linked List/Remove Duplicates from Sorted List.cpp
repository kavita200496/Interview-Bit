/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    ListNode* tmp = A;
    if (!tmp || !tmp->next) return A;
    
    while (tmp->next != NULL) {
        if (tmp->next->val == tmp->val) {
            ListNode* t = tmp->next;
            tmp->next = t->next;
            t->next = NULL;
            free(t);
        } else tmp = tmp->next;
    }
    return A;
}
