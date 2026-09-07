class Solution:
    def maxFreqSum(self, s: str) -> int:
        vowels = "aeiou"
        countv, countc = {}, {}
        
        for char in s:
            if char in vowels:
                countv[char] = countv.get(char, 0) + 1
            else:
                countc[char] = countc.get(char, 0) + 1

        maxv = max(countv.values()) if countv else 0
        maxc = max(countc.values()) if countc else 0  

        return maxv + maxc