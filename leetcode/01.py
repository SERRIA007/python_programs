class solution:
    def twosum(self, nums: List(int), target: int) -> List[int]:
        nums = [12, 4, 6, 2, 7]
        target = [10]
        n = len(nums)
        for i in range (n - 1):
            for j in range (i + 1, n):
                if nums[i] + nums[j] == target:
                    return[1, j]
        return[]