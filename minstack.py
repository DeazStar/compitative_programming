class MinStack:

    def __init__(self):
        self.minstack = []
        self.min = []
    def push(self, val: int) -> None:
        if len(self.minstack) == 0:
            self.min.append(val)
        else:
            if self.min[-1] >= val:
                self.min.append(val)
        self.minstack.append(val)

    def pop(self) -> None:
        if self.minstack[-1] == self.min[-1]:
            self.min.pop()
        self.minstack.pop()

    def top(self) -> int:
        return self.minstack[-1]

    def getMin(self) -> int:
        if len(self.min) == 0:
            return None
        return self.min[-1]
        


# Your MinStack object will be instantiated and called as such:
# obj = MinStack()
# obj.push(val)
# obj.pop()
# param_3 = obj.top()
# param_4 = obj.getMin()