class Solution:
    def canMakeSubsequence(self, str1: str, str2: str) -> bool:
        i = j = 0
        operations = 0
        next = {
    'a': 'b', 'b': 'c', 'c': 'd', 'd': 'e', 'e': 'f', 'f': 'g', 
    'g': 'h', 'h': 'i', 'i': 'j', 'j': 'k', 'k': 'l', 'l': 'm', 
    'm': 'n', 'n': 'o', 'o': 'p', 'p': 'q', 'q': 'r', 'r': 's', 
    's': 't', 't': 'u', 'u': 'v', 'v': 'w', 'w': 'x', 'x': 'y', 
    'y': 'z', 'z': 'a'
}

        while i < len(str1) and j < len(str2):
            # increment both if match
            if str1[i] == str2[j] or next[str1[i]] == str2[j]:
                i += 1
                j += 1
                operations += 1
            else:
                i += 1
        
        if operations == len(str2):
            return True
        return False