int cmp(const void* a, const void* b) {
    return *(int*)b - *(int*)a;
}

int hIndex(int* citations, int citationsSize){
    qsort(citations, citationsSize, sizeof(int), cmp);
    int h = 0;
    while (h < citationsSize && citations[h] > h) h++;
    return h;
}
