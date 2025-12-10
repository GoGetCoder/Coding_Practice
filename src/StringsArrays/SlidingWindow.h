#pragma once

#include "StringsAndArrays.h"

class CSlidingWindow : public CArrayAndStrings
{
public:
    /* 1. Given an array of positive integers nums and an integer k, find the length of the longest subarray whose sum is 
          less than or equal to k. */
    int findLenOfLongestSum(std::vector<int>& nums, int k) override;

    /* 2. You are given a binary string s (a string containing only "0" and "1"). You may choose up to one "0" and flip it to 
          a "1". What is the length of the longest substring achievable that contains only "1"?
          For example, given s = "1101100111", the answer is 5. If you perform the flip at index 2, 
          the string becomes 1111100111. */
    int longestOnes(std::string s) override;

    /* 3. Given an array of positive integers nums and an integer k, return the number of subarrays where the product of 
          all the elements in the subarray is strictly less than k.
          For example, given the input nums i = [10, 5, 2, 6], k = 100, the answer is 8. The subarrays with products less than k are:
          [10], [5], [2], [6], [10, 5], [5, 2], [2, 6], [5, 2, 6] */
    int numSubarrayProductLessThanK(std::vector<int>& nums, int k) override;

    /* 4. Given an integer array nums and an integer k, find the sum of the subarray with the largest sum whose length is k. */
    int sumOfLargestSubarrayWithLenK(std::vector<int>& nums, int k) override;
    
    /* 5. You are given an integer array nums consisting of n elements, and an integer k.
          Find a contiguous subarray whose length is equal to k that has the maximum average value and return this value. 
          Input: nums = [1,12,-5,-6,50,3], k = 4
          Output: 12.75000
          Explanation: Maximum average is (12 - 5 - 6 + 50) / 4 = 51 / 4 = 12.75 */
    double findMaxAverage(std::vector<int>& nums, int k) override;

    /* 6. Given a binary array nums and an integer k, return the maximum number of consecutive 1's in the array if you can 
          flip at most k 0's.
          Input: nums = [1,1,1,0,0,0,1,1,1,1,0], k = 2
          Output: 6
          Explanation: [1,1,1,0,0,<1,1,1,1,1,1>] */
    int longestOnes(std::vector<int>& nums, int k) override;

    /* 7. Given a string s and an integer k, return the maximum number of vowel letters in any substring of s with length k.
          Example: Input: s = "abciiidef", k = 3
                   Output: 3
                   Explanation: The substring "iii" contains 3 vowel letters.
    */
    int maxVowels(std::string s, int k) override;

    int numSubarraySumIsK(std::vector<int>& nums, int k) override;
}; 
