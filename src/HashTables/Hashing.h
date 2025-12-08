#pragma once

#include<string>
#include<vector>

class CHashing
{
public:
    // counting
    virtual int findLongestSubstring(std::string s, int k) { return 0; }
    virtual std::vector<int> intersection(std::vector<std::vector<int>>& nums) { return {}; }
    virtual bool areOccurrencesEqual(std::string s) { return false; }
};
