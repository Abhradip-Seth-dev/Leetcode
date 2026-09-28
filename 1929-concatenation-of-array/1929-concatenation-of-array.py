class Solution:
    def getConcatenation(self, nums: list[int]) -> list[int]:
        l=[]
        for num in nums:
            l.append(num)   
        for num in nums:
            l.append(num)

        return l       
        