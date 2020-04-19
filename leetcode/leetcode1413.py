class Solution(object):
    def minStartValue(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        minnum = min(nums)
        n = minnum
        flag = True
        while(1):
            temp =n
            for i in nums:
                n+=i
                s = n
                if n<1:
                    n = temp+1
                    flag = False
                    temp = n
                    break;
            if i ==nums[-1] and s>=1:
                break
        if flag:
            if minnum<1:
                return 1
            return minnum
        if temp<1:
            return 1
        return temp