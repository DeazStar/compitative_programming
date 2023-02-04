class Solution:
    def decodeString(self, s: str) -> str:
        stack = []
        for c in s:
            if c == ']':
                sub_string = ''
                while stack and stack[-1] != '[':
                    sub_string = stack.pop() + sub_string
                stack.pop() 
                repeat = ''
                while stack and stack[-1].isdigit():
                    repeat = stack.pop() + repeat
                repeat = int(repeat)
                sub_string *= repeat
                stack.append(sub_string)
            else:
                stack.append(c)
        return ''.join(stack)
