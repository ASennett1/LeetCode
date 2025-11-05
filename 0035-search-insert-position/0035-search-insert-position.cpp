class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        auto number = find(begin(nums), end(nums), target);
        size_t index = distance(begin(nums), number);
        auto lb = lower_bound(nums.begin(), nums.end(), target);
        int lowerBoundIndex = distance(nums.begin(), lb);

        if (number != end(nums))
        {
            return index;
        }
        else
        {
            return lowerBoundIndex;
        }
    }
};