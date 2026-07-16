/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int commonDivisor(int a, int b) {
    for (int i = ((a < b) ? a : b); i > 1; i--) {
        if (!(a % i) && !(b % i)) {
            return i;
        }
    }

    return 1;
}

struct ListNode* createNode(int val) {
    struct ListNode* new = malloc(sizeof(struct ListNode));
    new->val = val;
    new->next = NULL;
    return new;
}

struct ListNode* insertGreatestCommonDivisors(struct ListNode* head) {
    struct ListNode *headResult = NULL, *temp = NULL;
    int prevNumber = 0;

    for (struct ListNode *n = head; n != NULL; n = n->next) {
        if (headResult == NULL) {
            headResult = createNode(n->val);
            temp = headResult;
            prevNumber = n->val;
            continue;
        }

        // Between inserts
        temp->next = createNode(commonDivisor(prevNumber, n->val));
        temp = temp->next;
        temp->next = createNode(n->val);
        temp = temp->next;
        prevNumber = n->val;
    }
    
    return headResult;
}
