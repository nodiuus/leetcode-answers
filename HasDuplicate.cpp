//trans rights or something like that idk

class Solution {
public:
   bool containsDuplicate(std::vector<int>& nums) {
        std::sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                return true;
            }
        }
        return false;
    }
};
