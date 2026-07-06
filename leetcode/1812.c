bool squareIsWhite(char* coordinates) {
    // Even == black
    return (((coordinates[0] - '`') + coordinates[1]) & 1);
}
