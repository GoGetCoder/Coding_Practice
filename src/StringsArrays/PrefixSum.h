#pragma once

#include "StringsAndArrays.h"

class CPrefixSum : public CArrayAndStrings
{  
public:
    /* 1. Given an integer array nums, an array queries where queries[i] = [x, y] and an integer limit, 
          return a boolean array that represents the answer to each query. A query is true if the sum of the subarray
          from x to y is less than limit, or false otherwise.
          For example, given nums = [1, 6, 3, 2, 7, 2], queries = [[0, 3], [2, 5], [2, 4]], and limit = 13, 
          the answer is [true, false, true]. For each query, the subarray sums are [12, 14, 12]. */
    std::vector<bool> answerQueries(std::vector<int>& nums, std::vector<std::vector<int>>& queries, int limit) override;

    /* 2. Given an integer array nums, find the number of ways to split the array into two parts so that the first section has 
          a sum greater than or equal to the sum of the second section. The second section should have at least one number. */
    int wayToSplitArray(std::vector<int>& nums) override;
    int wayToSplitArrayOnlyInt(std::vector<int>& nums) override;

    /* 3. Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).
          Return the running sum of nums.
          Input: nums = [1,2,3,4]
          Output: [1,3,6,10]
          Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4]. */
    std::vector<int> runningSum(std::vector<int>& nums) override;
    std::vector<int> getAverages(std::vector<int>& nums, int k) override;
  
};
