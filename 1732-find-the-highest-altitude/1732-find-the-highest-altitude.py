class Solution:
    def largestAltitude(self, gain: List[int]) -> int:
        ans=0
        n=len(gain)
        val=[0]*n
        val[0]=gain[0]
        ans=max(ans,val[0])

        for i in range(1,n):
            val[i]=val[i-1] + gain[i]
            ans=max(ans,val[i])

        return ans    