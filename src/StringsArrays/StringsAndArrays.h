#pragma once

#include <vector>
#include <string>

class CArrayAndStrings
{
public:
    // two pointers
    virtual bool isPalindrome(std::string s) { return false; }
    virtual bool checkPairForTarget(std::vector<int>& nums, int target) { return false; }
    virtual std::vector<int> combineSorted(std::vector<int> arr1, std::vector<int> arr2) { return {}; }
    virtual bool isSubsequence(std::string s, std::string t) { return false; }
    virtual void reverseString(std::vector<char>& s) { }
    virtual std::vector<int> sortedSquares(std::vector<int>& nums) { return {}; }
    // sliding window
    virtual int findLenOfLongestSum(std::vector<int>& nums, int k) { return 0; };
    virtual int longestOnes(std::string s) { return 0; }
    virtual int numSubarrayProductLessThanK(std::vector<int>& nums, int k) { return 0; }
    virtual int sumOfLargestSubarrayWithLenK(std::vector<int>& nums, int k) { return 0; }
    virtual double findMaxAverage(std::vector<int>& nums, int k) { return 0.0; }
    virtual int longestOnes(std::vector<int>& nums, int k) { return 0; }
    // prefix sum
    virtual std::vector<bool> answerQueries(std::vector<int>& nums, std::vector<std::vector<int>>& queries, int limit) { return {}; }
    virtual int wayToSplitArray(std::vector<int>& nums) { return 0; }
    virtual int wayToSplitArrayOnlyInt(std::vector<int>& nums) { return 0; }
    virtual std::vector<int> runningSum(std::vector<int>& nums) { return {}; }

    virtual std::vector<int> getAverages(std::vector<int>& nums, int k) { return {}; }
    virtual int numSubarraySumIsK(std::vector<int>& nums, int k) { return 0; }
};
