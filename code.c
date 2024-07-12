int removestrings(char* s, char* target, int point) {
    int total = 0, w = 0;
    for (int r = 0; s[r]; r++) {
        s[w++] = s[r];
        if (w > 1 && s[w - 1] == target[1] && s[w - 2] == target[0]) {
            total += point;
            w -= 2;
        }
    }
    s[w] = '\0';
    return total;
}
int maximumGain(char* s, int x, int y) {
    int total = 0;
    if (x > y) {
        total += removestrings(s, "ab", x);
        total += removestrings(s, "ba", y);
    } else {
        total += removestrings(s, "ba", y);
        total += removestrings(s, "ab", x);
    }
    return total;
}
