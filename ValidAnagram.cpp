//this is for the people out there
//aye

class Solution {
public:
   bool isAnagram(std::string s, std::string t) {
      if (s.length() != t.length()) return false;

      std::unordered_map<char, int> FrequencyS, FrequencyT;

      for (char c : s) {
        FrequencyS[c]++;
      }

      for (char c : t) {
        FrequencyT[c]++;
      }

      return FrequencyS == FrequencyT;
  }
};
