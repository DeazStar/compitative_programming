class MyQueue:

    def __init__(self):
        self.first_stack = []
        self.second_stack = []
    def push(self, x: int) -> None:
        if len(self.first_stack) == 0:
            self.first_stack.append(x)
        else:
            while self.first_stack:
                self.second_stack.append(self.first_stack.pop())
            self.first_stack.append(x)
            while self.second_stack:
                self.first_stack.append(self.second_stack.pop())
            

    def pop(self) -> int:
        return self.first_stack.pop()

    def peek(self) -> int:
        return self.first_stack[-1]

    def empty(self) -> bool:
        return not self.first_stack


# Your MyQueue object will be instantiated and called as such:
# obj = MyQueue()
# obj.push(x)
# param_2 = obj.pop()
# param_3 = obj.peek()
# param_4 = obj.empty()