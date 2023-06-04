class Solution(object):
    def lengthOfLastWord(self, s):
        lst = list(s.split(" "))
        n = len(lst)
        for i in range(n):
            if (lst[n-1-i].isalpha()):
                return len(lst[n-1-i])
        return 0