class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        arr=[1]*len(nums)
        n=len(nums)
        i=n-2
        arr[n-1]=nums[n-1]
        while(i>=0):
            arr[i]=arr[i+1]*nums[i]
            i-=1
        crt=1
        for i in range(n-1):
            arr[i]=crt*arr[i+1]
            crt*=nums[i]
        arr[n-1]=crt
        return arr