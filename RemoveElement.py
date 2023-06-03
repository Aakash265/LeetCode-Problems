class Solution(object):
    def removeElement(self, nums, val):
        count = 0
        for ele in nums:
            if ele != val:
                nums[count] = ele
                count += 1
        return count