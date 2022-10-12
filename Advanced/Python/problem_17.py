class Solution:
    def minWindow(self, s: str, t: str) -> str:
        if len(t) > len(s): return ""
        target = Counter(t)
        i = 0
        count = 0
		# find the starting point i
        while i < len(s):
            if s[i] in target:
                break
            i += 1
        ans = ''
        j = i
        while i < len(s) and j < len(s):
            if s[j] in target:
                target[s[j]] -= 1
                if target[s[j]] >= 0:
                    count += 1
                #remove redundant charactors
                while i < len(s):
                    if s[i] in target:
                        if target[s[i]] < 0:
                            target[s[i]] += 1
                        else: break
                    i += 1
                # temp solution found
                if count == len(t):
                    if ans == '' or len(ans) > j+1-i:
                        ans = s[i:j+1]
					# move i forward
                    target[s[i]] += 1
                    if target[s[i]] > 0:
                        count -= 1
                    i += 1
                    while i < len(s):
                        if s[i] in target:
                            if target[s[i]] < 0:
                                target[s[i]] += 1
                            else: break
                        i += 1
            j += 1
        return ans
