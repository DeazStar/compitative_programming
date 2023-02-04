class Solution:
    def reverseParentheses(self, s: str) -> str:
        stack = []
        pairs = {}
        for i, c in enumerate(s):
            if c == "(":
                stack.append(i)
            elif c == ")":
                j = stack.pop()
                pairs[i] = j
                pairs[j] = i
        i = 0
        d = 1
        res = []
        while i < len(s):
            if s[i] in "()":
                i = pairs[i]   
                d = -d         
            else:
                res.append(s[i])
            i += d
        return "".join(res)
