import heapq

class Solution:
    def kSmallestPairs(self, nums1, nums2, k):
        # edge case
        if not nums1 or not nums2:
            return []

        heap = []

        # Step 1: push first column (j = 0)
        for i in range(min(k, len(nums1))):
            heapq.heappush(heap, (nums1[i] + nums2[0], i, 0))

        ans = []

        # Step 2: process heap
        while heap and len(ans) < k:
            sum_, i, j = heapq.heappop(heap)

            # add pair to answer
            ans.append([nums1[i], nums2[j]])

            # Step 3: push next element in same row
            if j + 1 < len(nums2):
                heapq.heappush(heap, (nums1[i] + nums2[j + 1], i, j + 1))

        return ans