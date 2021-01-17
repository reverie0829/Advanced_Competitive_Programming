class Solution(object):
    def stringMatching(self, words):
        """
        :type words: List[str]
        :rtype: List[str]
        """
        ans = []
        for t in range(len(words)) :
            j = t+1
            while( j < len(words) ):
                if len(words[t]) < len(words[j]):
                    lenlong = len(words[t])
                    for k in range( len( words[j])-lenlong+1 ):
                        if words[t] == words[j][k:k+lenlong]:
                            if words[t]  not in ans: 
                                ans.append(words[t])
                            break
                else:
                    lenlong = len(words[j])
                    for k in range( len( words[t])-lenlong+1 ):
                        if words[j] == words[t][k:k+lenlong]:
                            if words[j] not in ans:
                                ans.append(words[j])
                            break
                j+=1
        return ans