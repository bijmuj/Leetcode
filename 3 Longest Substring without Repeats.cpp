class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> table;
        int l, r, ans=0;
        for(l=0, r=0; r<s.size(); r++){
            if (table.count(s[r])){
                l = max(table[s[r]], l);
                table[s[r]] = r+1;
            }
            else
                table.insert({s[r], r+1});
            ans = max(ans, r - l + 1);
        }
        return ans;
    }  
};