class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        char_set = set()
        n = len(s)
        max_length, left, right = 0, 0, 0
        while left < n and right < n:
            if s[right] not in char_set:
                char_set.add(s[right])
                right += 1
                max_length = max(max_length, right - left)
            else:
                char_set.remove(s[left])
                left += 1
        return max_length

