from collections import deque
from typing import List


class Solution:
    def maxSlidingWindow(self, nums: List[int], k: int) -> List[int]:
        q, output = deque(), []

        for i, e in enumerate(nums):
            while q:
                if nums[mx_idx := q[0]] <= e:
                    q.clear()  # removing all the elements from queue (not required though)
                elif k < i - mx_idx + 1:
                    # if we do not pop left the q then in window size will be k + 1
                    q.popleft()
                elif nums[q[-1]] <= e:
                    # last element of queue is less than the current element
                    q.pop()
                else:
                    break

            q.append(i)

            if i >= k - 1:
                output.append(nums[q[0]])

        return output
