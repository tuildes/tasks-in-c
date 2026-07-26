int minTimeToVisitAllPoints(int** points, int pointsSize, int* pointsColSize) {
    int x = points[0][0], y = points[0][1], seconds = 0, xMoves, yMoves;

    for (int i = 1; i < pointsSize; i++) {
        xMoves = abs((x - points[i][0]));
        yMoves = abs((y - points[i][1]));
        
        if (xMoves < yMoves) {
            seconds += xMoves;
            seconds += (yMoves - xMoves);
        } else {
            seconds += yMoves;
            seconds += (xMoves - yMoves);
        }

        x = points[i][0];
        y = points[i][1];
    }    

    return seconds;
}
