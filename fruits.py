class Solution:
    def totalFruit(self, fruits: List[int]) -> int:
        n = len(fruits)
        if n <= 2:
            return n
        left, right = 0, 0
        count = collections.Counter()
        max_fruits = 0
        while right < n:
            count[fruits[right]] += 1
            while len(count) >= 3:
                count[fruits[left]] -= 1
                if count[fruits[left]] == 0:
                    del count[fruits[left]]
                left += 1
            max_fruits = max(max_fruits, right - left + 1)
            right += 1
        return max_fruits

