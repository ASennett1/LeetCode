class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //sort the vector
        sort(nums.begin(), nums.end());
        // move unique elements to the front and return iterator to the new end
        auto last = unique(nums.begin(), nums.end());
        // erase duplicate elements from the end
        nums.erase(last, nums.end());
        // return nums size
        return nums.size();
        
    }
};