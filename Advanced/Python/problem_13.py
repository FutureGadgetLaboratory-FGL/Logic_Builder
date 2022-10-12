class Solution:
    def longestValidParentheses(self, s: str) -> int:
        cur=0
        stack=[]
        stack.append(-1)
        for i in range (len(s)):
            if s[i]=='(':
                stack.append(i)
            else:
                stack.pop()
                if len(stack)==0:
                    stack.append(i)
                else:
                    cur=max(cur,i-stack[-1])
        return cur        
