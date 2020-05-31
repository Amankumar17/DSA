class Solution:
          
    def canJump(self, nums: List[int]) -> bool:
        n=len(nums)
        i=0
        while(i<n):
            cnt=1
            i+=1
            while(i<n and nums[n-i-1]<cnt):
                i+=1
                cnt+=1
        if cnt>1:
            return False
        return True