class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> h;
        int comp;
        for (int i=0; i<nums.size(); i++){
            comp = target - nums[i];
            if (h.count(comp)){
                return vector<int> {h[comp], i};
            }
            h.insert({nums[i], i});
        }
        return vector<int> {0, 0};
    }
};