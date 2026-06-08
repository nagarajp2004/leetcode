class Solution:
    def minimumAbsDifference(self, arr: List[int]) -> List[List[int]]:
        arr.sort()
        mini=float('inf')
        temp=[]
        ans=[]

        for i in range(len(arr)-1):
            a=arr[i]
            b=arr[i+1]
            if mini>(abs(a-b)):
                ans.clear()
                mini=abs(a-b)
                ans.append([a,b])
            elif mini==(abs(a-b)):
                ans.append([a,b])
        return ans