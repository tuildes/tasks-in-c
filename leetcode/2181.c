struct ListNode* createNode(int val) {
    struct ListNode* n = malloc(sizeof(struct ListNode));
    n->next = NULL;
    n->val = val;
    return n;
}

struct ListNode* mergeNodes(struct ListNode* head) {
    struct ListNode *resHead = NULL, *resActual = NULL;
    int sum = 0;

    for (struct ListNode* n = head->next; n != NULL; n = n->next) {
        if (n->val == 0) {
            if (resHead == NULL) {
                resHead = createNode(sum);
                resActual = resHead;

            } else {
                resActual->next = createNode(sum);
                resActual = resActual->next;
            }

            sum = 0;
            continue;
        }

        sum += n->val;
    }

    return resHead;
}
