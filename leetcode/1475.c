int* finalPrices(int* prices, int pricesSize, int* returnSize) {
    int* finalPricesResult = calloc(pricesSize, sizeof(int));
    if (finalPricesResult == NULL) { return NULL; }
    *returnSize = pricesSize;

    for (int i = 0; i < pricesSize; i++) {
        for (int j = (i + 1); j < pricesSize; j++) {
            if (prices[j] <= prices[i]) {
                finalPricesResult[i] -= prices[j];
                break;
            }
        }

        finalPricesResult[i] += prices[i];
    }

    return finalPricesResult;
}
