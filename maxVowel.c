int maxVowels(char * s, int k){
    int len = strlen(s), max_vowels = 0, count = 0;
    for (int i = 0; i < k; i++) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
            count++;
        }
    }
    max_vowels = count;
    for (int i = k; i < len; i++) {
        if (s[i - k] == 'a' || s[i - k] == 'e' || s[i - k] == 'i' || s[i - k] == 'o' || s[i - k] == 'u') {
            count--;
        }
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
            count++;
        }
        if (count > max_vowels) {
            max_vowels = count;
        }
    }
    return max_vowels;
}
