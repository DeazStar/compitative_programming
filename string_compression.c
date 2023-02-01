int compress(char* chars, int charsSize){
    int index = 0;
    int i = 0;
    while (i < charsSize) {
    char current = chars[i];
    int count = 0;
    while (i < charsSize && chars[i] == current) {
        i++;
        count++;
    }
    chars[index++] = current;
    if (count > 1) {
    char countStr[10];
    int len = sprintf(countStr, "%d", count);
    for (int j = 0; j < len; j++) {
        chars[index++] = countStr[j];
    }
}
}
return index;
}
