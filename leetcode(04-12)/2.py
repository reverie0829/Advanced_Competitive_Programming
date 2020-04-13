class Solution(object):
    def processQueries(self, queries, m):
        """
        :type queries: List[int]
        :type m: int
        :rtype: List[int]
        """
        ans = []
        p = list(range(1,m+1))
        for i in range( len(queries) ) :
            for j in range( len(p) ):
                if queries[i] == p[j]:
                    ans.append(j)
                    temp = p[j]
                    del p[j]
                    p.insert(0,temp)
        return ans