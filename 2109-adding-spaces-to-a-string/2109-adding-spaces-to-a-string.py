class Solution:
    def addSpaces(self, s: str, spaces: List[int]) -> str:
        ans = ""
        i = 0
        for x in range(len(s)):
            if i < len(spaces) and x == spaces[i]:
                ans += " "
                i += 1
            ans += s[x]
            # print(ans)
            # print(i)
        
        return ans