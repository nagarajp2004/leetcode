class Solution:
    def asteroidsDestroyed(self, mass: int, ast: List[int]) -> bool:
        ast.sort()
        for i in ast:
            if mass < i:
                return False
            else:
                mass+=i
        return True            
