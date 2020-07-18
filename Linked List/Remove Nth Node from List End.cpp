/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
    ListNode* tmp = A;
    while (tmp != NULL && B) {
        tmp = tmp->next;
        B--;
    }
    if (tmp == NULL && B >= 0) return A->next;

    ListNode* del = A;
    ListNode* t = del;
    while (tmp != NULL) {
        t = del;
        del = del->next;
        tmp = tmp->next;
    }
    t->next = del->next;
    del->next = NULL;
    delete(del);
    return A;
}
