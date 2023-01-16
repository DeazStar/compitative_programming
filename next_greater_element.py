class Solution:
    def nextGreaterElement(self, nums1: List[int], nums2: List[int]) -> List[int]:
        stack = []
        push = False
        value = 0

        for i in nums1:
            j = nums2.index(i)
            k = j + 1
            while k < len(nums2):
                if (nums2[k] > nums2[j]):
                    push = True
                    value = nums2[k]
                    break;
                k += 1
        
            if (push):
                stack.append(value)
                push = False
            else:
                stack.append(-1)

        return stack