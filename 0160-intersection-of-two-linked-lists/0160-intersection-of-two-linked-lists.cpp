class Solution {
public:
    int getLength(ListNode* head) {
        int count = 0;
        while (head != NULL) {
            count++;
            head = head->next;
        }
        return count;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lenA = getLength(headA);
        int lenB = getLength(headB);
        int diff = abs(lenA - lenB);
        if (lenA > lenB) {
            while (diff--) {
                headA = headA->next;
            }
        } else {
            while (diff--) {
                headB = headB->next;
            }
        }
        while (headA != headB) {
            headA = headA->next;
            headB = headB->next;
        }
        return headA;   
    }
};