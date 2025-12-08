#pragma once

#include "Hashing.h"

class CCounting : public CHashing
{
public:
    /*
    * Example 1: You are given a string s and an integer k. Find the length of the longest substring that contains at most k distinct characters.
                 For example, given s = "eceba" and k = 2, return 3. The longest substring with at most 2 distinct characters is "ece".
    */
    int findLongestSubstring(std::string s, int k) override;
    /*
      Example 2: Given a 2D array nums that contains n arrays of distinct integers, return a sorted array containing all the numbers that 
                 appear in all n arrays.
                 For example, given nums = [[3, 1, 2, 4, 5], [1, 2, 3, 4], [3, 4, 5, 6]], return[3, 4]. 3 and 4 are the only numbers that 
                 are in all arrays.
    */
    std::vector<int> intersection(std::vector<std::vector<int>>& nums) override;
    /*
      Example 3: Given a string s, determine if all characters have the same frequency.
      For example, given s = "abacbc", return true, because all characters appear twice. Given s = "aaabb", return false.
      "a" appears 3 times, "b" appears 2 times. 3 != 2.
    */
    bool areOccurrencesEqual(std::string s) override;
};
