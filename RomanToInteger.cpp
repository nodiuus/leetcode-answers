#include <iostream>
#include <map>

#define string std::string //at this point i just couldnt be asked to LOL

class Solution {
public:
     int romanToInt(string String) {
        std::map<char, int> RomanMap;
        RomanMap['I'] = 1;
        RomanMap['V'] = 5;
        RomanMap['X'] = 10;
        RomanMap['L'] = 50;
        RomanMap['C'] = 100;
        RomanMap['D'] = 500;
        RomanMap['M'] = 1000;

        int Result = 0;

        for (int i = 0; i < String.length(); i++) {
            if (i == String.length()) {
                Result += RomanMap[String[i]];
            } else if(RomanMap[String[i]] < RomanMap[String[i+1]]) {
                 Result -= RomanMap[String[i]];
            } else {
                 Result += RomanMap[String[i]];
            }

        }
        return Result;
    }
};
