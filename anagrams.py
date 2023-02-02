class Solution:
    def findAnagrams(self, s: str, p: str) -> List[int]:
        n, m = len(s), len(p)
        if n < m:
            return []
        p_count = collections.Counter(p)
        s_count = collections.Counter(s[:m])
        res = []
        for i in range(n - m + 1):
            if p_count == s_count:
                res.append(i)
            s_count[s[i]] -= 1
            if s_count[s[i]] == 0:
                del s_count[s[i]]
            if i + m < n:
                s_count[s[i + m]] += 1
        return res

