class Solution:
    def rotate(self, nums, k: int) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        if k >= len(nums):
            k = k % len(nums)
        double = nums + nums
        print(double)
        print(double[len(nums)-k:2*len(nums)-k])
        nums[:] = double[len(nums)-k:2*len(nums)-k]

    def moveZeroes(self, nums) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        oldLen = len(nums)
        nNums = [x for x in nums if x != 0]
        newLen = len(nNums)
        zeroLen = [0 for x in range(oldLen-newLen)]
        print(nNums+zeroLen)

sol = Solution()

print(sol.rotate([1, 2, 3, 4, 5, 6, 7], 3))
sol.moveZeroes([0, 1, 0, 3, 12])
sol.moveZeroes([0, 0, 1])
sol.moveZeroes([0,1])