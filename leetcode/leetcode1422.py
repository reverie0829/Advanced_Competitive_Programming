class Solution(object):
    def maxScore(self, s):
        """
        :type s: str
        :rtype: int
        """
        ans = 0
        for i in range(1,len(s)):
            cnt0 = 0
            for j in (s[:i]):
                if j == '0':
                    cnt0+=1
            cnt1 = 0
            for j in (s[i:]):
                if j == '1':
                    cnt1+=1
            ans = max(ans,cnt0+cnt1 )
        return ans