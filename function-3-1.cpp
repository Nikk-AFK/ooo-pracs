bool is_fanarray(int array[], int n) {
    if (n < 1 || (n % 2) == 0) {
        return 0;
    }
    for (int i = 0; i < n; i++) {
        if (array[i] != array[(n-1)-i]) {
            return false;
        }
    }
    return true;
}