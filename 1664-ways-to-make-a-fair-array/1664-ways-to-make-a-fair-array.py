class Solution:
    def waysToMakeFair(self, nums: List[int]) -> int:
        res=0
        pre_even=0
        pre_odd=0
        n=len(nums)
        t_even=sum(nums[i] for i in range(0,n,2))
        t_odd=sum(nums[i] for i in range(1,n,2))

        for i,num in enumerate(nums):
            right_even=t_even - pre_even - (nums[i] if i%2==0 else 0)
            right_odd =t_odd - pre_odd-(nums[i] if i%2!=0 else 0)


            new_ev=pre_even + right_odd
            new_od=pre_odd + right_even

            if new_ev == new_od:
                res+=1

            if i%2==0:
                pre_even+=nums[i]
            else:
                pre_odd+=nums[i]


        return res                
        