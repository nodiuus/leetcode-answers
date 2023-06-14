class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& Numbers, int Target) {
        vector<int> Result;

        for (int i = 0; i < Numbers.size(); i++) {
            for (int j = i + 1; j < Numbers.size(); j++) {
                if (Numbers[i] + Numbers[j] == Target) {
                    Result.push_back(i);
                    Result.push_back(j);
                    return Result;
                }
            }
        }

        return Result;
    }
};
