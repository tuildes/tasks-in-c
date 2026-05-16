/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* newNode(int v) {
    struct ListNode* node = malloc(sizeof(struct ListNode));

    node->val = v;
    node->next = NULL;

    return node;
}

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    int moreOne = 0;
    struct ListNode* res = NULL;
    struct ListNode* aux = NULL;
    int resultTemp;

    while(l1 != NULL || l2 != NULL) {
        if (l1 != NULL && l2 != NULL)
            resultTemp = (l1->val + l2->val + moreOne);
        else if (l1 != NULL)
            resultTemp = (l1->val + moreOne);
        else
            resultTemp = (l2->val + moreOne);

        if (resultTemp > 9) {
            resultTemp %= 10;
            moreOne = 1;

        } else {
            if (moreOne) { moreOne = 0; }
        }

        struct ListNode* new = newNode(resultTemp);
        if (res == NULL) {
            res = new;
            aux = new;
        } else {
            aux->next = new;
            aux = aux->next;
        }

        if (l1 != NULL) l1 = l1->next;
        if (l2 != NULL) l2 = l2->next;
    }

    if (moreOne) {
       struct ListNode* new = newNode(1);
       aux->next = new;
    }

    return res;
}
