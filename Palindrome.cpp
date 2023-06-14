class Solution {
public:
    bool isPalindrome(int x) {
        std::string Number = std::to_string(x);
        std::reverse(Number.begin(), Number.end());

        try {
            int CheckNumber = std::stoi(Number);

            if (CheckNumber == x) {
                return true;
            } else {
                return false;
            }
        } catch (const std::out_of_range&) {
            return false;
        }
    }
};
