int* minOperations(char* boxes, int* returnSize) {
    int* moves = calloc(strlen(boxes), sizeof(int));
    if (moves == NULL) { return NULL; }
    *returnSize = strlen(boxes);

    for (int i = 0; boxes[i] != '\0'; i++) {
        if (boxes[i] != '1') { continue; }

        for (int j = 0; boxes[j] != '\0'; j++) {
            moves[j] += abs((j - i));
        }
    }

    return moves;
}
