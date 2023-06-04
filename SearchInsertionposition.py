class Solution(object):
    def searchInsert(self, nums, target):
        for i in range(len(nums)):
            if nums[i] >= target:
                return i
            elif nums[i] < target and i == len(nums)-1:
                return i+1
        return -1