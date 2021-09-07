class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        table = {}
        ans = 0
        l = 0
        for r, c in enumerate(s):
            if c in table:
                l = max(table[c], l)
                table[c] = r + 1
            else:
                table[c] = r + 1
            ans = max(ans, r - l + 1)
        return ans