class Solution:
    def maxOperations(self, nums: List[int], k: int) -> int:
        count = 0
        nums_dict = {}
        for num in nums:
            if k - num in nums_dict:
                count += 1
                nums_dict[k - num] -= 1
                if nums_dict[k - num] == 0:
                    del nums_dict[k - num]
            else:
                if num in nums_dict:
                    nums_dict[num] += 1
                else:
                    nums_dict[num] = 1
        return count
