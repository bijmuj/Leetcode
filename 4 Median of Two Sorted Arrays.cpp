class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums3;
        int p1=0, p2=0, s, mid1, mid2;
        while (p1<nums1.size() && p2<nums2.size()){
            if (nums1[p1]<nums2[p2])
                nums3.push_back(nums1[p1++]);
            else 
                nums3.push_back(nums2[p2++]);
        }
        while (p1<nums1.size())
            nums3.push_back(nums1[p1++]);
        while (p2<nums2.size())
            nums3.push_back(nums2[p2++]);
        
        s = nums3.size() + 1;
        if (s%2){
            mid1 = (s+1)/2 - 1;
            mid2 = (s-1)/2 - 1;
            return (double)(nums3[mid1] + nums3[mid2])/2;
        }
        return (double)nums3[s/2 - 1];
    }
};