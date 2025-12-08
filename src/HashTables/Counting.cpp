#include <unordered_map>
#include <algorithm>
#include "Counting.h"

int CCounting::findLongestSubstring(std::string s, int k)
{
    int left = 0, ans = 0;
    std::unordered_map<char, int> hash_map;

    for (int right = 0; right < s.size(); right++)
    {
        hash_map[s[right]]++;

        while (hash_map.size() > k)
        {
            hash_map[s[left]]--;
            if (hash_map[s[left]] == 0)
                hash_map.erase(s[left]);
            left++;
        }

        ans = std::max(ans, right - left + 1);
    }

    return ans;
}

std::vector<int> CCounting::intersection(std::vector<std::vector<int>>& nums)
{
    std::unordered_map<int, int> hash_map;
    std::vector<int> ans;

    for (auto& arr : nums)
    {
        for (auto& n : arr)
        {
            hash_map[n]++;
        }
    }

    int size = nums.size();
    for (auto& entry : hash_map)
    {
        if (entry.second == size)
            ans.push_back(entry.first);
    }

    std::sort(ans.begin(), ans.end());
    return ans;
}

bool CCounting::areOccurrencesEqual(std::string s)
{
    std::unordered_map<char, int> hash_map;

    for (auto& c : s)
    {
        hash_map[c]++;
    }

    int count = hash_map.begin()->second;

    for (auto& entry : hash_map)
    {
        if (entry.second != count)
            return false;
    }

    return true;
}
