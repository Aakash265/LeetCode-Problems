class Solution(object):
    def plusOne(self, digits):
        converted_digits = map(str, digits)
        s = str(int("".join(converted_digits)) + 1)
        lst = list(s)
        intLst = map(int, lst)
        return intLst
