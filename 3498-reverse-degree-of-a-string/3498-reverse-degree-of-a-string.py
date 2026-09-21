from collections import defaultdict
class Solution:
    def reverseDegree(self, s: str) -> int:
        freq = defaultdict(int)
        product ,suum= 1,0
        charlist='abcdefghijklmnopqrstuvwxyz'
        num=27
        for char in charlist:
            num-=1
            freq[char]=num
        for i in range(0,len(s)):
            suum+=product*((i+1)*freq[s[i]])

        return suum 
            
            
        