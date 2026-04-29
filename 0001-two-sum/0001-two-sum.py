class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        mp = {}
        
        # store value -> index
        for index, value in enumerate(nums):
            mp[value] = index
        
        # check for complement
        for ind, val in enumerate(nums):
            complement = target - val
            if complement in mp and mp[complement] != ind:
                return [ind, mp[complement]]