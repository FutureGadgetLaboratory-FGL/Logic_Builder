from collections import Counter

class Solution:
    def minWindow(self, s: str, t: str) -> str:
        if len(t) > len(s):
            return ""

        target = Counter(t)
        i = j = 0
        count = len(t)
        min_len = float('inf')
        start = 0

        while j < len(s):
            if s[j] in target:
                target[s[j]] -= 1
                if target[s[j]] >= 0:
                    count -= 1

                while count == 0:
                    if j - i + 1 < min_len:
                        min_len = j - i + 1
                        start = i

                    if s[i] in target:
                        target[s[i]] += 1
                        if target[s[i]] > 0:
                            count += 1

                    i += 1

            j += 1

        return "" if min_len == float('inf') else s[start:start + min_len]
