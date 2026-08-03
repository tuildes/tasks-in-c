struct ListNode* createNode(int val) {
    struct ListNode *new = (struct ListNode*)malloc(sizeof(struct ListNode));
    if (new == NULL) { return NULL; }

    new->val = val;
    new->next = NULL;

    return new;
}

struct ListNode* reverseList(struct ListNode* head) {
    if (head == NULL) { return NULL; }

    struct ListNode *res = createNode(head->val), *new;
    for (struct ListNode *temp = head->next; temp != NULL; temp = temp->next) {
        new = createNode(temp->val);
        new->next = res;
        res = new;
    }

    return res;
}
