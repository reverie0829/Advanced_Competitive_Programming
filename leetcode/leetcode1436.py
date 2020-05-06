class Solution(object):
    def destCity(self, paths):
        """
        :type paths: List[List[str]]
        :rtype: str
        """
        if len(paths)==1:
            return paths[0][1]
        cnt = {}
        for i in paths:
            for j in i:
                if j in cnt.keys():
                    cnt[j]+=1
                else:
                    cnt.update({j:1})
        for i in paths:
            if cnt[ i[1] ]==1:
                return i[1]