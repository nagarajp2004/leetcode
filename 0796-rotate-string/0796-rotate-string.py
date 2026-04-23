class Solution:
    def rotateString(self, s: str, goal: str) -> bool:
        
        if len(goal) < len(s)  or len(goal) > len(s):
            return False
        s=s+s
        if goal in s:
            return True
        else:
            return False    