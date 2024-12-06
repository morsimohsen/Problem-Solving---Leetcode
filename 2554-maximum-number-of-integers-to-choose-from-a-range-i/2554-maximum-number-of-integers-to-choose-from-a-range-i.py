class Solution:
    def maxCount(self, banned: List[int], n: int, maxSum: int) -> int:
        b = set(banned)
        sum = 0
        ans = 0
        for i in range(1, n+1):
            
            if i not in b:
                sum += i
                if sum > maxSum:
                    break
                ans += 1
            print(sum)
        return ans