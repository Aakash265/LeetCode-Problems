class Solution(object):
    def strStr(self, haystack, needle):
        last = len(needle)
        for first in range(len(haystack)):
            if haystack[first:last] == needle:
                return first
            last += 1
        return -1