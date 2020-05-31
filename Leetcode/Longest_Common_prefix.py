class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        fg=0
        i=0
        if len(strs)==0:
            return ""
        while(fg==0 and i<len(min(strs))):
            for x in strs:
                if x[i]!=strs[0][i]:
                    fg=1
                    break
            if fg==0:
                i+=1
        return strs[0][:i]