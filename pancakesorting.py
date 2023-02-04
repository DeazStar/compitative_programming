class Solution:
    def pancakeSort(self, arr: List[int]) -> List[int]:
        res = []
        n = len(arr)
        for i in range(n, 0, -1):
            max_idx = arr.index(i)
            if max_idx != i - 1:
                if max_idx != 0:
                    res.append(max_idx + 1)
                    arr = arr[:max_idx+1][::-1] + arr[max_idx+1:]
                res.append(i)
                arr = arr[:i][::-1]
        return res
