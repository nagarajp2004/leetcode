class Solution:
    def findMaxVal(self, n: int, rest: List[List[int]], diff: List[int]) -> int:
        inf=10**18
        limit=[inf]*n
        limit[0]=0

        for idx,maxi in rest:
            limit[idx]=min(limit[idx],maxi)

        for i in range(n-1):
            limit[i+1]=min(limit[i+1],limit[i]+diff[i])

        for i in range(n-2,-1,-1):
            limit[i]=min(limit[i],limit[i+1]+diff[i])    

        return max(limit)        