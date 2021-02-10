int isPerfectSquare(int rest) {
    int isPS = 0;
    float x;

    x = sqrt(rest);
    if(x == (int)x) {
        isPS = 1;
    }

    if (isPS == 1) {
        return 1;
    } else {
        return -1;
    }
}
