bool is_fanarray(int array[], int n) {
    for (int i = 0; i < n; i++) {
        if (array[i] != array[(n-1)-i]) {
            return false;
        }
    }
    return true;
}