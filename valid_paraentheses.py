class Solution:
    def isValid(self, s: str) -> bool:
        dictionary = {")": "(", "}": "{", "]": "[" }
        stack = []
        for i in range(len(s)):
            if len(stack) == 0:
                if s[i] in dictionary.values():
                    stack.append(s[i])
                else: 
                    return False
            else:
                if s[i] in dictionary.values():
                    stack.append(s[i])
                elif stack[-1] == dictionary.get(s[i]):
                    stack.pop()
                else:
                    return False
        
        if len(stack) == 0:
           return True
        else:
            return False
