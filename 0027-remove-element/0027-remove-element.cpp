class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        //stable_partition(nums.begin(), nums.end(), [val](int i) { return i != val; });
        //vector<int> vec;
        int index = 0;
        for (int i = 0; i < nums.size(); ++i)
        {
            if (nums[i] != val)
            {
                nums[index++] = nums[i];
            }
        }
        return index;
    }

    
};