#pragma once

#include "StringsAndArrays.h"

class CTwoPointers : public CArrayAndStrings
{
public:
    /* 1. Given a string s, return true if it is a palindrome, false otherwise */
    bool isPalindrome(std::string s) override;

    /* 2. Given a sorted array of unique integers and a target integer, return true if there exists a pair 
          of numbers that sum to target, false otherwise.
          For example, given nums = [1, 2, 4, 6, 8, 9, 14, 15] and target = 13, return true because 4 + 9 = 13. */
    bool checkPairForTarget(std::vector<int>& nums, int target) override;

    /* 3. Given two sorted integer arrays arr1 and arr2, return a new array that combines both of them and is also sorted. */
    std::vector<int> combineSorted(std::vector<int> arr1, std::vector<int> arr2) override;

    /* 4. Given two strings s and t, return true if s is a subsequence of t, or false otherwise.
          A subsequence of a string is a sequence of characters that can be obtained by deleting some (or none) of the 
          characters from the original string, while maintaining the relative order of the remaining characters. 
          For example, "ace" is a subsequence of "abcde" while "aec" is not. */
    bool isSubsequence(std::string s, std::string t) override;

    /* 5. Write a function that reverses a string. The input string is given as an array of characters s.
          You must do this by modifying the input array in-place with O(1) extra memory.
          Input: s = ["h","e","l","l","o"]
          Output: ["o","l","l","e","h"] */
    void reverseString(std::vector<char>& s) override;

    /* 6. Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number
          sorted in non-decreasing order.
          Input: nums = [-4,-1,0,3,10]
          Output: [0,1,9,16,100]
          Explanation: After squaring, the array becomes [16,1,0,9,100].
          After sorting, it becomes [0,1,9,16,100]. */
    std::vector<int> sortedSquares(std::vector<int>& nums) override;
};