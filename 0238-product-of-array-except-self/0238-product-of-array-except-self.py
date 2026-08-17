class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        product = 1
        zero_count = 0
        
        
        for num in nums:
            if num == 0:
                zero_count += 1
            else:
                product *= num
        
        
        for i in range(len(nums)):
            if zero_count == 0:
                nums[i] = product // nums[i]
            elif zero_count >= 2:
                nums[i] = 0
            else:
                if nums[i] == 0:
                    nums[i] = product
                else:
                    nums[i] = 0
        
        
        return nums