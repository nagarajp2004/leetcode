class Solution:
    def licenseKeyFormatting(self, s: str, k: int) -> str:
        s = s.replace('-', '').upper()   # remove dashes + uppercase
        
        ans = ""
        count = 0
        
        for i in range(len(s) - 1, -1, -1):
            ans += s[i]
            count += 1
            
            if count == k:
                ans += '-'
                count = 0
        
        ans = ans[::-1]   # reverse
        
        # remove leading dash if exists
        if ans and ans[0] == '-':
            ans = ans[1:]
            
        return ans